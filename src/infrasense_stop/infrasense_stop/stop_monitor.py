import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped

class StopMonitor(Node):

    def __init__(self):
        super().__init__('stop_monitor')

        self.velocity_sub = self.create_subscription(
            TwistStamped,
            '/infrasense/test_velocity',
            self.velocity_callback,
            10
        )

    # get current velocity
    def velocity_callback(self, msg):

        speed_mps = msg.twist.linear.x

        self.get_logger().info(
            f"Vehicle speed: {speed_mps:.3f} m/s"
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