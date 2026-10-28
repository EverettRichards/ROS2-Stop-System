import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool

class StopController(Node):

    def __init__(self):
        super().__init__('stop_controller')

        self.stop_latched = False
        self.stop_request_time_ns = None

        self.subscription = self.create_subscription(
            Bool,
            '/infrasense/test_stop',
            self.stop_callback,
            10
        )

    def stop_callback(self, msg):

        if not msg.data:
            return

        if self.stop_latched:
            return

        self.stop_latched = True
        self.stop_request_time_ns = time.monotonic_ns()

        self.get_logger().warn(
            "STOP REQUEST LATCHED (simulation only)"
        )

def main(args=None):
    rclpy.init(args=args)
    controller = StopController()

    rclpy.spin(controller)

    # shutdown when done :)
    controller.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()