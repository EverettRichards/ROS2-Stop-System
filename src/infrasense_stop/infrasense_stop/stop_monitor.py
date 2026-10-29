import time
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
from std_msgs.msg import Bool


class StopMonitor(Node):

    def __init__(self):
        super().__init__('stop_monitor')

        self.velocity_sub = self.create_subscription(
            TwistStamped,
            '/infrasense/test_velocity',
            self.velocity_callback,
            10
        )

        self.stop_sub = self.create_subscription(
            Bool,
            '/infrasense/test_stop',
            self.stop_callback,
            10
        )

        self.latest_speed_mps = None
        self.stop_request_time_ns = None
        self.stopped_time_ns = None

    # get current velocity
    def velocity_callback(self, msg):

        self.latest_speed_mps = abs(msg.twist.linear.x)

        self.get_logger().info(
            f"Vehicle speed: {self.latest_speed_mps:.3f} m/s"
        )

        if (
            self.latest_speed_mps < 0.05
            and self.stop_request_time_ns is not None
            and self.stopped_time_ns is None
        ):
            
            self.stopped_time_ns = time.monotonic_ns()

            elapsed_ms = (
                self.stopped_time_ns - self.stop_request_time_ns
            ) / 1_000_000

            self.get_logger().warn(f"Speed reduced to {self.latest_speed_mps:.3f}m/s in an interval of {elapsed_ms:.1f}ms. Vehicle stopped.")

    def stop_callback(self,msg):

        if not msg.data:
            return

        if self.stop_request_time_ns is not None:
            return

        self.stop_request_time_ns = time.monotonic_ns()

        self.get_logger().warn(
            f"Stop request detected. "
            f"Current speed: {self.latest_speed_mps} m/s."
        )

def main(args=None):
    rclpy.init(args=args)
    monitor = StopMonitor()

    rclpy.spin(monitor)

    # shutdown when done, as per usual :)
    monitor.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()