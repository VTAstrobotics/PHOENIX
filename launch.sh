#!/bin/bash

echo "Changing directory"
cd /workspaces/PHOENIX/src/main_ws

echo "Sourcing"
source install/setup.bash

echo "Launching background processes"
ros2 launch controls launch.yaml &
ros2 launch teleop launch.yaml &

echo "Starting Joystick control"
ros2 run joy joy_node

pkill ros2
pkill dig
pkill dump
pkill distrib
pkill drivetrain
pkill uart
echo "Killed background processes"
