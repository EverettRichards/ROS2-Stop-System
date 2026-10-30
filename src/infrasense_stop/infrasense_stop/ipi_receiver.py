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
            print("Error: messageType is *not* 'EMERGENCY_STOP'")
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

    buffer = b""
    MAX_MESSAGE_BYTES = 8192

    while True:
        chunk = connection.recv(1024)
        received_ns = time.monotonic_ns()

        if not chunk:
            if buffer:
                node.get_logger().warn("Connection closed with incomplete JSON.")
            break

        buffer += chunk

        while b"\n" in buffer:
            raw_message, buffer = buffer.split(b"\n", 1)

            if not raw_message.strip():
                continue

            if len(raw_message) > MAX_MESSAGE_BYTES:
                node.get_logger().warn("Message too large.")
                continue

            try:
                message = raw_message.decode("utf-8")
            except UnicodeDecodeError:
                node.get_logger().warn("Invalid UTF-8 message.")
                continue

            if isStopMessage(message):
                stop_msg = Bool()
                stop_msg.data = True

                timestamp_msg = Int64()
                timestamp_msg.data = received_ns

                timestamp_pub.publish(timestamp_msg)
                node.get_logger().info(
                    f"Stop received at T1 = {received_ns} ns"
                )

                publisher.publish(stop_msg)
                node.get_logger().info("Published test stop request.")

        if len(buffer) > MAX_MESSAGE_BYTES:
            node.get_logger().error("Incomplete message exceeded size limit.")
            break

    # Close server connection
    connection.close()
    server.close()

    # Shut down ROS2.
    # Kill! Kill! Kill!
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()