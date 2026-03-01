import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/fred/mobile_robotics/assignments/assignment2/install/turtlebot3_teleop'
