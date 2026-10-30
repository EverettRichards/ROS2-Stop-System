import time
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from dbw_ford_msgs.msg import BrakeCmd, ThrottleCmd

class StopController(Node):

    def __init__(self):
        super().__init__('stop_controller')

        self.stop_latched = False
        self.stop_request_time_ns = None

        self.command_timer = self.create_timer(0.1, self.command_timer_callback)

        self.subscription = self.create_subscription(
            Bool,
            '/infrasense/test_stop',
            self.stop_callback,
            10
        )

        self.brake_pub = self.create_publisher(
            BrakeCmd,
            '/vehicle/brake_cmd',
            1
        )

        self.throttle_pub = self.create_publisher(
            ThrottleCmd,
            '/vehicle/throttle_cmd',
            1
        )

    def command_timer_callback(self):
        if self.stop_latched:
            self.publish_test_commands()

    def stop_callback(self, msg):

        if not msg.data:
            return

        if self.stop_latched:
            return

        self.stop_latched = True
        self.stop_request_time_ns = time.monotonic_ns()

        self.get_logger().warn(
            "STOP REQUEST LATCHED"
        )
        
        #self.publish_test_commands()

    def publish_test_commands(self):

        brake = BrakeCmd()
        throttle = ThrottleCmd()

        brake.pedal_cmd_type = BrakeCmd.CMD_PERCENT
        brake.pedal_cmd = 0.40
        brake.enable = True
        brake.clear = False
        brake.ignore = False

        throttle.pedal_cmd_type = ThrottleCmd.CMD_PERCENT
        throttle.pedal_cmd = 0.0
        throttle.enable = True
        throttle.clear = False
        throttle.ignore = False

        self.brake_pub.publish(brake)
        self.throttle_pub.publish(throttle)

        self.get_logger().info("Published non-actuating DBW test messages.")

def main(args=None):
    rclpy.init(args=args)
    controller = StopController()

    rclpy.spin(controller)

    # shutdown when done :)
    controller.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()