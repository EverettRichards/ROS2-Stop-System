import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/everett/ROS2-Stop-System/install/infrasense_stop'
