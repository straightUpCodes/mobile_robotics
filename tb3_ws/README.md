# Mapping phase

To generate the map, first run Gazebo:

    ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py

Afterwards run slam_toolbox so that LiDAR data can be used to generate the map:

    ros2 launch slam_toolbox online_async_launch.py use_sim_time:=true

Run RViz to open up the map visualizing:

    ros2 run rviz2 rviz2 --ros-args -p use_sim_time:=true

    Add robot model, tf2, and map. Next select /robot_description, and /map for robot model and map display respectively. At this point the map, TF, and robot sould all be visible

Setup input:

    Run joy and teleop nodes to use PS5 controller as input:

        ros2 run joy joy_node --ros-args -p use_sim_time:=true
        ros2 run teleop_twist_joy teleop_node --ros-args --params-file src/autonomous_vacuum/config/ps5.yaml -p use_sim_time:=true

        Since PS5 controller is not native to teleop_twist_joy, a custom ps5.yaml config file was created.

    If keyboard input is preffered use the following:

        ros2 run turtlebot3_teleop teleop_keyboard --ros-args -p use_sim_time:=true

Generate map:

    Move robot around each room while observing gazebo, and RViz at the same time to ensure mapping is being complete. Once map has been generated, save map using SlamToolboxPlugin in RViz.

To load the map:

    Map files are found in  src/autonomous_vacuum/maps

    ros2 launch turtlebot3_navigation2 navigation2.launch.py use_sim_time:=True map:=src/autonomous_vacuum/maps/house_map.yaml

# Room specifications

- Room specifications can be found in src/autonomous_vacuum/config/room_params.yaml

- Room specification were found using RViz publish point function.

- Each room has been annotated on the map found in src/autonomous_vacuum/maps/house_map_annotated.png

- The bedroom, and family room have been given 8 and 10 points respectively intead of the 4 seen in other rooms. This is because the shelves found in those rooms did not present as barriers in the map, however the vacuum should not go over them and therefore the room coordiantes were set to exclude them.
