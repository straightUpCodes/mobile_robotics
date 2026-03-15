# Steps

- [x] Ensure phase 1 and 2 steps match specification and are not missing
- [x] Complete phase 1
- [ ] Create necessary notes and README.md for phase 1
- [x] Complete phase 2
- [ ] Create necessary notes and README.md for phase 2
- [ ] Complete phase 3
- [ ] Create necessary notes and README.md for phase 3
- [ ] Complete phase 4
- [ ] Create necessary notes and README.md for phase 4
- [ ] Complete phase 5
- [ ] Create necessary notes and README.md for phase 5
- [ ] Complete phase 6
- [ ] Create necessary notes and README.md for phase 6

# Userful references:

- SLAM:
  https://github.com/SteveMacenski/slam_toolbox
  https://www.youtube.com/watch?v=ZaiA3hWaRzE
  https://www.youtube.com/watch?v=hMTxb8Y2cxI

- Turtlebot 3: https://emanual.robotis.com/docs/en/platform/turtlebot3/overview/#overview

- Nav2: https://docs.nav2.org

- House simulation: https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/

# Notes:

## Terminal shortcuts

alias eb='nano ~/.bashrc'
alias sb='source ~/.bashrc'

alias ws='cd ~/mobile_robotics/tb3_ws'
alias src='cd ~/mobile_robotics/tb3_ws/src'
alias cb='colcon build --symlink-install'

# Plan:

## Phase 1: Environment and Workspace Setup

Before implementing application-level autonomy, we must establish the operational environment and package structure.

- Create a map of the environment using SLAM as practiced in class.

- Provide clear instructions to reproduce the mapping step or to load a saved map.

- Create our own new ROS2 package that contains our project logic, including nodes, launch files, configs, and documentation.

## Phase 2: Semantic Room Representation

The robot requires a spatial data structure to understand the boundaries of its operational domains.

- Define rooms with room names, such as kitchen or bedroom.

- Establish room boundaries so the robot knows which area belongs to each room.

- Describe each room using a set of user-provided boundary points in the map frame.

- Ensure the room definitions are reproducible, meaning we use the same names and boundaries every run.

## Phase 3: Autonomy Interface and Optimized Navigation

This phase bridges user commands with the ROS2 Navigation stack, integrating bonus optimizations for path planning.

- Implement the commands goto_room("room_name") and clean_room("room_name") via ROS2 services, actions, topics, or a CLI node.

- Select an appropriate target pose inside the requested room and send the goal to Nav2 programmatically.

- Optimize Navigation and Costmap parameters to demonstrate measurable improvements, such as faster cleaning, fewer failures, and smoother motion. (Reference: Official ROS2 Nav2 Configuration Guide).

- Document and explain which parameters changed and why.

## Phase 4: Automatic Waypoint Generation (Bonus Strategy)

Instead of providing manual waypoints, we will build a dynamic path planner to handle room coverage.

- Execute a motion strategy inside the room boundary to maximize floor coverage.

- Automatically generate cleaning waypoints for a room using a lane or grid pattern. (Reference: Choset, H. (2001). Coverage for robotics. Annals of Mathematics and Artificial Intelligence).

- Remove unsafe waypoints near obstacles based on the robot's size and clearance.

## Phase 5: Advanced Dynamic Obstacle Handling (Bonus Strategy)

A robust autonomy layer must dynamically adapt its state machine when the environment changes during execution.

- Ensure the robot avoids walls and furniture, which act as static obstacles.

- Implement smarter dynamic-obstacle handling to adapt the cleaning plan after repeated failures.

- Handle blocked points by postponing them, revisiting them later, or removing the region from the plan entirely.

## Phase 6: System Testing and Final Deliverables

The final system must be rigorously tested against the instructor's external coverage metrics and packaged for distribution.

- Design strategies that carefully balance higher coverage, faster cleaning time, and robust, safe behavior.

- Deliver a ROS2 package source code containing the nodes, launch files, configuration files, and a clear README with step-by-step instructions.

- Produce a live or recorded demo showing mapping, navigation, autonomous room cleaning, and behavior when a waypoint fails.

- Submit a short explanation covering how rooms are represented, the automatic cleaning strategy, how Nav2 goals are sent, and the effects of parameter tuning.

# Steps taken:

## Folder set up

Reference: S04T01_ROS2_Basics

mkdir src
colcon build --symlink-install
source install/setup.bash

cd src
ros2 pkg create --build-type ament_python autonomous_vacuum --dependencies rclpy

Edit description, email and license in package.xml and setup.py

## Phase 1

https://emanual.robotis.com/docs/en/platform/turtlebot3/simulation/
ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py

https://docs.nav2.org/tutorials/docs/navigation2_with_slam.html
ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true
ros2 run rviz2 rviz2 --ros-args -p use_sim_time:=true

Add robot model, tf2, and map and select /robot_description, and /map for robot model and map display respectively

https://index.ros.org/p/joy/ and https://docs.ros.org/en/iron/p/teleop_twist_joy/
ros2 run joy joy_node --ros-args -p use_sim_time:=true
ros2 run teleop_twist_joy teleop_node --ros-args --params-file src/autonomous_vacuum/config/ps5.yaml -p use_sim_time:=true

Move robot around each room while observing gazebo, and Rviz at the same time. Once map has been generated, save map using plugin.

## Phase 2

ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py
ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=/home/fred/mobile_robotics/tb3_ws/src/autonomous_vacuum/maps/house_map.yaml
ros2 topic echo /clicked_point

To get robot model and nav2 goal set up set initial pose estimate
