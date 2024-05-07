#! /bin/bash

echo "Changing directory"
cd src/main_ws

echo "Building project"
colcon build
source install/setup.sh