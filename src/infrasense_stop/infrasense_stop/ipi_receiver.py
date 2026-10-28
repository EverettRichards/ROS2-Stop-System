import socket
import rclpy
from std_msgs.msg import Bool

def main():
    rclpy.init()

    node = rclpy.create_node('ipi_receiver')

    publisher = node.create_publisher(
        Bool,
        '/infrasense/test_stop',
        10
    )

    HOST = "127.0.0.1"
    PORT = 5001

    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    server.bind((HOST, PORT))
    server.listen()

    print(f"Listening on {HOST}:{PORT}")

    connection, address = server.accept()
    print(f"Connected to {address}")

    while True:
        data = connection.recv(1024)

        if not data:
            print("Client disconnected. Exiting.")
            break

        message = data.decode('utf-8')

        if message.strip() == "":
            print("Empty string encountered. Exiting.")
            break

        print(f"Raw data: {data}") # returns as raw bytes, and may include newline
        print(f"Decoded message: {message}")

        if message.strip() == "STOP":
            stop_msg = Bool()
            stop_msg.data = True
            publisher.publish(stop_msg)
            node.get_logger().info("Published test stop request.")

    # Close server connection
    connection.close()
    server.close()

    # Shut down ROS2.
    # Kill! Kill! Kill!
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()