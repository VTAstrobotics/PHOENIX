#!/bin/bash

# Setup
echo "Setting up..."
cd /workspaces/PHOENIX/src/main_ws
source install/setup.bash

# Running
echo "Launching nodes..."
ros2 launch controls launch.yaml &
ros2 launch teleop launch.yaml &
ros2 run joy joy_node

# Teardown
echo "Shutting down..."
pkill ros2
pkill dig
pkill dump
pkill distrib
pkill drivetrain
pkill uart
echo "Killed background processes"
