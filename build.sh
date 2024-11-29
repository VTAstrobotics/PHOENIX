#!/bin/bash

printf "\nbuild.sh:\n"
echo "Changing directory"
cd /workspaces/PHOENIX/src/main_ws

echo "Building main ws"
colcon build --symlink-install

echo "Sourcing main ws"
source install/setup.bash

cd /workspaces/PHOENIX/micro_ws

echo "Building micro ws"
cd micro_ros_raspberrypi_pico_sdk
rm -rf build/
mkdir build
cd build
cmake ..
make

printf "build.sh done.\n\n"
