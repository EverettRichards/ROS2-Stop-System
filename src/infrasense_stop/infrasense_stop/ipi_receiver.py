import time
import json
import socket
import argparse

import rclpy
from std_msgs.msg import Bool
from std_msgs.msg import Int64

from rclpy.qos import (
    QoSProfile,
    ReliabilityPolicy,
    DurabilityPolicy,
    HistoryPolicy
)

stop_qos = QoSProfile(
    history=HistoryPolicy.KEEP_LAST,
    depth=1,
    reliability=ReliabilityPolicy.RELIABLE,
    durability=DurabilityPolicy.VOLATILE
)

parser = argparse.ArgumentParser()
parser.add_argument("--port", type=int, default=5000, help="TCP port to listen on")
parser.add_argument("--host", type=str, default="0.0.0.0", help="IP address to look at (default 0.0.0.0)")
args = parser.parse_args()

PORT = args.port
HOST = args.host

def isStopMessage(msg):
    try:
        data = json.loads(msg)

        if not "messageType" in data:
            print("Error: no messageType provided.")
            return False
        
        if data["messageType"] == "EMERGENCY_STOP":
            return True
        else:
            print(f"Error: messageType is *not* 'EMERGENCY_STOP': {data['messageType']}")
            return False

    except Exception as e:
        print(f"Error parsing JSON: {str(e)}")
        return False

def main():
    rclpy.init()

    node = rclpy.create_node('ipi_receiver')

    publisher = node.create_publisher(
        Bool,
        '/infrasense/test_stop',
        stop_qos
    )

    timestamp_pub = node.create_publisher(
        Int64,
        '/infrasense/test_stop_t1_ns',
        10
    )

    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    server.bind((HOST, PORT))
    server.listen()

    print(f"Listening on {HOST}:{PORT}")

    connection, address = server.accept()
    print(f"Connected to {address}")

    decoder = LengthPrefixedDecoder(max_body_bytes=65_536)

    try:
        while True:
            chunk = connection.recv(4096)
            received_ns = time.monotonic_ns()

            if not chunk:
                decoder.finish()  # Reports a truncated header/body, if present.
                node.get_logger().info("TCP client closed cleanly.")
                break

            for frame in decoder.feed(chunk, received_ns):
                try:
                    message = json.loads(frame.payload.decode("utf-8"))
                except (
                    UnicodeDecodeError,
                    json.JSONDecodeError,
                    RecursionError,
                ) as exc:
                    node.get_logger().warn(
                        f"Discarding invalid JSON frame: {exc}"
                    )
                    continue

                if not isinstance(message, dict):
                    node.get_logger().warn(
                        "Discarding JSON that is not an object."
                    )
                    continue

                # TIM and other messages do not trigger this handler.
                if message.get("messageType") != "EMERGENCY_STOP":
                    continue

                payload = message.get("payload")
                command_id = (
                    payload.get("commandId", "(missing)")
                    if isinstance(payload, dict)
                    else "(missing)"
                )

                timestamp_msg = Int64()
                timestamp_msg.data = frame.completed_recv_ns

                stop_msg = Bool()
                stop_msg.data = True

                timestamp_pub.publish(timestamp_msg)
                publisher.publish(stop_msg)

                node.get_logger().info(
                    f"EMERGENCY_STOP commandId={command_id} "
                    f"parsed and published; "
                    f"T1={frame.completed_recv_ns} ns"
                )

    except (FramingError, OSError) as exc:
        node.get_logger().error(f"Ending TCP connection: {exc}")

    finally:
        # Close server connection
        connection.close()
        server.close()

        # Shut down ROS2.
        # Kill! Kill! Kill!
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()