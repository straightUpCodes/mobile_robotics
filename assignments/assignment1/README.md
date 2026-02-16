# Build setup:

cd mobile_robotics/assignments/assignment1

colcon build

source install/setup.bash

# Server:

ros2 run assignment1 pos_action_server.py

# Client

ros2 run assignment1 pos_action_client.py
