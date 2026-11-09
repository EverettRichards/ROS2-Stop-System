import struct
from dataclasses import dataclass
from typing import Iterator


class FramingError(ValueError):
    """The connection cannot be safely decoded using the agreed framing."""


@dataclass(frozen=True)
class Frame:
    payload: bytes
    completed_recv_ns: int


class LengthPrefixedDecoder:
    """Buffer partial headers/bodies and emit complete frames in order.

    Consume each feed() iterator immediately before calling feed() again.
    completed_recv_ns is the caller's monotonic timestamp immediately after
    recv() returned the bytes completing the frame. It is not a NIC timestamp.
    Several frames completed by one recv() share the same timestamp.
    """

    def __init__(self, max_body_bytes: int = 65_536):
        if not 1 <= max_body_bytes <= 0xFFFFFFFF:
            raise ValueError("max_body_bytes must be between 1 and 2**32 - 1")
        self.max_body_bytes = max_body_bytes
        self._buffer = bytearray()
        self._failed = False

    @property
    def pending_bytes(self) -> int:
        """Unconsumed bytes, including an incomplete frame's header."""
        return len(self._buffer)

    def feed(self, chunk: bytes, received_ns: int) -> Iterator[Frame]:
        if self._failed:
            raise FramingError("Decoder failed; close this connection")

        self._buffer.extend(chunk)

        while len(self._buffer) >= 4:
            body_length = struct.unpack_from("!I", self._buffer)[0]

            if not 1 <= body_length <= self.max_body_bytes:
                self._failed = True
                raise FramingError(
                    "Invalid body length {} (allowed 1..{}); "
                    "check sender framing".format(body_length, self.max_body_bytes)
                )

            frame_length = 4 + body_length
            if len(self._buffer) < frame_length:
                return  # Keep the partial frame for a later recv().

            payload = bytes(self._buffer[4:frame_length])
            del self._buffer[:frame_length]
            yield Frame(payload, received_ns)

    def finish(self) -> None:
        """Call at EOF. Clean closure is valid only at a frame boundary."""
        if self._failed:
            raise FramingError("Connection ended after a framing error")
        if not self._buffer:
            return
        if len(self._buffer) < 4:
            raise FramingError(
                "EOF during length header ({}/4 bytes)".format(len(self._buffer))
            )
        body_length = struct.unpack_from("!I", self._buffer)[0]
        raise FramingError(
            "EOF during JSON body ({}/{} bytes)".format(
                len(self._buffer) - 4, body_length
            )
        )