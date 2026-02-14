import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/fred/mobile_robotics/exercises/ros2_ws/install/ros_basics'
