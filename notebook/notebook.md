# Steps

- [x] Ensure phase 1 and 2 steps match specification and are not missing
- [x] Complete phase 1
- [x] Create necessary notes and README.md for phase 1
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

## Assignment 3

Lua file: /home/fred/turtlebot3_ws/src/turtlebot3/turtlebot3_cartographer/config/turtlebot3_lds_2d.lua

ros2 topic echo /map --once before moving

[x] Set max speeds in controlelr YAML
[x] create and save one map using SLAM Toolbox
[x] record a short video (about 10 seconds) while mapping
[x] create and save one map using Cartographer

ros2 launch turtlebot3_cartographer cartographer.launch.py use_sim_time:=True

[x] record a short video (about 10 seconds) while mapping
[x] change one parameter in Cartographer
TRAJECTORY_BUILDER_2D.max_range
Old: 3.5
New: 2
Differences observed:
Must make more loops to cover the same area. Even when near a wall, it faces difficulty mapping it. It seems than lowering it below 3.5 causes degreadtion of performance rather than an improvement.

Change one parameter in SLAM Toolbox
resolution
Old: 0.05
New: 0.03
Differences observed
Negligible deifference was found after the change. Initially it was tested at 0.01, then 0.001, and then finally a full map genrated with 0.03. Anything past 0.01 is negligible since the LDS-01 which the TurtleBot3 uses has an error margin of 0.01. Regardless reducing the resolution did not create any vast changes in the quality of the map.

segment your map into rooms and document room boundary points
room name, and annotations
room boundaries in pixels
room boundaries in meters
briefly research the algorithmic difference between Cartographer and SLAM Toolbox

## Phase 3 and on

[x] Read and find coverage path planning options - 24th

[x] Formulate best algorthim to use - 24th

[ ] Create system diagrams of how they would work with a plan for the code. - 25th

[ ] Write code - 29th

[ ] Test and integrate - 31st, 3rd

[ ] Clean repo - 2nd

[ ] Document system design, and other techincal work in a clean matter - 4th, 5th

### Coverage path planning research

- https://www.ri.cmu.edu/pub_files/pub4/choset_howie_1997_3/choset_howie_1997_3.pdf

  Really old but simple to use.

- https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=11029278

  Very advanced but could be overkill

- https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=9523743

  Comparison guide "cellular decomposition is the simplest
  method to segment the region into smaller sub-area"

- https://ieeexplore.ieee.org/document/10946186

  General CPP survey

It all starts with heursitic vs classical algorhtim. Because our project explicitly looks for good coverage, the advantage is given to calssical algorhtims. THe main and aboslute reason classical algothim should be used is the the size and simnplicity of the space aswell as the determinsitc nature of the robot task. Hueristic algorhtims are used when the mathamteical calculation of the classical apporach is not feasible, therefore a best good enough solution is chosen. Feasibility is not an issue with this project and a classical solution is more than possible and therefore should be chosen.

Since the house has rooms which are ploygon shaped, there are few obstacles, and each room is mapped into well defined polygons, BCD algorithm becomes the best choice.

### Search algorhtims

- https://en.wikipedia.org/wiki/A*_search_algorithm and https://www.datacamp.com/tutorial/a-star-algorithm
  A\*

- https://en.wikipedia.org/wiki/D_ and https://cdn.aaai.org/AAAI/2002/AAAI02-072.pdf
  D\* Lite
