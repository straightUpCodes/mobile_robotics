# Steps

- [ ] Ensure phase 1 and 2 steps match specification and are not missing
- [ ] Create further steps for all other phases
- [ ] Complate phase 1
- [ ] Create necessary notes and README.md for phase 1
- [ ] Complate phase 2
- [ ] Create necessary notes and README.md for phase 2
- [ ] Complate phase 3
- [ ] Create necessary notes and README.md for phase 3
- [ ] Complate phase 4
- [ ] Create necessary notes and README.md for phase 4
- [ ] Complate phase 5
- [ ] Create necessary notes and README.md for phase 5
- [ ] Complate phase 6
- [ ] Create necessary notes and README.md for phase 6

# Userful references:

- SLAM: https://github.com/SteveMacenski/slam_toolbox

- Turtlebot 3: https://emanual.robotis.com/docs/en/platform/turtlebot3/overview/#overview

- Nav2: https://docs.nav2.org

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

# Tasks

## Task 1.1: Workspace and Package Initialization

Before launching any simulations, we must set up the directory structure where our code will live.

    Create the Workspace: Initialize a standard ROS2 colcon workspace (e.g., ~/tb3_ws/src).

    Generate the Package: Create our own new ROS2 package that contains our project logic. Depending on our team's preference, generate this as a Python (ament_python) or C++ (ament_cmake) package.

    Create Standard Directories: Inside our new package, create standard ROS2 subdirectories for our project logic: nodes, launch (for launch files), and config (for config files like room names/boundaries).

    Define Dependencies: Update our package.xml and CMakeLists.txt (or setup.py) to include dependencies on rclpy/rclcpp, geometry_msgs, nav2_msgs, and the standard TurtleBot3 packages. This ensures our package builds and runs reliably.

## Task 1.2: Environment Simulation Launch

We need to get the virtual robot running in the specified world to begin mapping.

    Set Environment Variables: Export the necessary TurtleBot3 environment variables (e.g., export TURTLEBOT3_MODEL=waffle).

    Launch the World: Launch the TurtleBot3 in Gazebo using the provided House/Home world. Verify that the robot spawns correctly and the physics engine is stable.

## Task 1.3: SLAM Execution and Map Generation

With the simulation running, we must create the static map that the Navigation stack (Nav2) will use later.

    Start SLAM: Launch the SLAM node. We may use existing ROS2 packages for SLAM (map creation). Run the SLAM method as practiced in class.

    Teleoperate and Map: Use a teleoperation node (keyboard or joystick) to drive the TurtleBot3 around the Gazebo House world, ensuring we cover all rooms to build a complete occupancy grid.

    Save the Map: Once the map is fully generated, use the nav2_map_server map saver CLI to export the map. This will generate a .yaml and a .pgm (or .png) file. Save these files into the config or maps directory of our custom ROS2 package.

## Task 1.4: Documentation and Reproducibility Setup

Our instructor will evaluate how easily we can run our code. This must be documented immediately.

    Draft the README: Create a clear README with step-by-step run instructions.

    Document Mapping Instructions: Provide clear instructions to reproduce the mapping step, or explicitly document the command to load the saved map we generated in Task 1.3.

    Version Control: Commit our initialized package, the saved map files, and the initial README to our Git repository.

## Task 2.1: Coordinate Extraction (The Map Frame)

Before writing code, you need to extract the physical coordinates of the rooms from the map you generated in Phase 1.

    Launch RViz: Open your saved map in RViz.

    Extract Points: Use the "Publish Point" tool in RViz to find the (x,y) coordinates for the corners of each room.

    Adhere to Frame Constraints: Ensure these extracted coordinates are strictly relative to the map frame.

    Define Boundaries: You must define room boundaries so the robot knows which area belongs to each room. A simple minimum option is a rectangle consisting of 4 points, though other representations are allowed if documented.

## Task 2.2: Configuration File Creation

Hardcoding coordinates into your Python or C++ scripts is bad practice. You must utilize ROS2 parameter files to meet the reproducibility and packaging requirements.

    Create a YAML File: Create a .yaml configuration file within your custom ROS2 package.

    Define Room Data: Within this file, define rooms with specific room names (e.g., kitchen, bedroom, living_room).

    Map Boundaries: Assign the boundary points you extracted in Task 2.1 to their respective room names within the YAML structure.

    Ensure Reproducibility: Structuring the data this way guarantees that the room definitions must be reproducible, meaning they use the same names and boundaries every run.

## Task 2.3: Parameter Loading Node Implementation

Next, you need a way for your ROS2 system to ingest this YAML file so the autonomy layer can access the data.

    Write a Parser Node: Create a ROS2 node (or integrate it into your main autonomy node) that reads the YAML file upon startup.

    Store in Memory: Store the room names and their corresponding map frame boundary points in a readily accessible data structure, such as a dictionary in Python or a std::map in C++.

    Verify Alignment: Print the loaded parameters to the terminal on startup to verify that the system has successfully loaded the correct room names and boundaries in the map frame, which is a core grading requirement worth 10 points.

## Task 2.4: Architecture Documentation

Keep your documentation updated concurrently with your development to ensure you secure the reproducibility points.

    Update the README: Add a section to your README explaining how the rooms are represented.

    Document Custom Logic: If you chose to represent boundaries using a shape other than a 4-point rectangle, you must ensure it is documented.
