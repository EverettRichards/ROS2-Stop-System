import time
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TwistStamped
from std_msgs.msg import Bool, Int64

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

        self.timestamp_sub = self.create_subscription(
            Int64,
            '/infrasense/test_stop_t1_ns',
            self.timestamp_callback,
            10
        )

        # global velocity threshold at which the vehicle is considered stopped, in m/s
        self.stop_velocity_threshold = 0.05

        # how long do you have to be stopped, in ns, before a "stop" is recorded?
        self.stop_confirmation_ns = 300_000_000

        self.latest_speed_mps = None
        self.stop_request_time_ns = None
        self.stopped_time_ns = None
        self.zero_speed_since_ns = None
        self.t1_ns = None
        self.result_logged = False

    # get current velocity
    def velocity_callback(self, msg):

        self.latest_speed_mps = abs(msg.twist.linear.x)

        self.get_logger().info(
            f"Vehicle speed: {self.latest_speed_mps:.3f} m/s"
        )

        if self.stop_request_time_ns is None:
            return

        if self.stopped_time_ns is not None:
            return

        now_ns = time.monotonic_ns()

        if self.latest_speed_mps < self.stop_velocity_threshold:

            if self.zero_speed_since_ns is None:
                self.zero_speed_since_ns = now_ns

            elapsed_ns = now_ns - self.zero_speed_since_ns

            if elapsed_ns >= self.stop_confirmation_ns:
                self.stopped_time_ns = self.zero_speed_since_ns
                self.report_result()

                stop_duration_ms = (
                    self.stopped_time_ns - self.stop_request_time_ns
                ) / 1_000_000

                self.get_logger().warn(
                    f"STOP CONFIRMED. Duration: {stop_duration_ms:.2f} ms"
                )

        else:
            self.zero_speed_since_ns = None

    def stop_callback(self,msg):

        # only stop if the stop request contains boolean value 'true'
        if not msg.data:
            return

        # if you already requested to stop, don't double-count it!
        if self.stop_request_time_ns is not None:
            self.get_logger().warn("Stop request ignored: A stop request is already being processed.")
            return

        # Make sure the vehicle was already moving to begin with
        if (
            self.latest_speed_mps is None
            or self.latest_speed_mps < self.stop_velocity_threshold
        ):
            self.get_logger().warn("Stop request ignored: Vehicle is not yet moving.")
            return

        # Record the time at which the stop request was received
        self.stop_request_time_ns = time.monotonic_ns()

        # log the fact that the stop request was duly received
        self.get_logger().warn(
            f"Stop request detected. "
            f"Current speed: {self.latest_speed_mps} m/s."
        )

    def timestamp_callback(self, msg):
        if self.t1_ns is None:
            self.t1_ns = msg.data
            self.get_logger().info("Received vehicle T1 timestamp.")
            self.report_result()

    def report_result(self):
        if self.result_logged:
            return

        if self.t1_ns is None or self.stopped_time_ns is None:
            return

        elapsed_ms = (
            self.stopped_time_ns - self.t1_ns
        ) / 1_000_000

        self.get_logger().info(
            f"NETWORK-TO-STOP TIME: {elapsed_ms:.2f} ms"
        )

        self.result_logged = True

def main(args=None):
    rclpy.init(args=args)
    monitor = StopMonitor()

    rclpy.spin(monitor)

    # shutdown when done, as per usual :)
    monitor.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()