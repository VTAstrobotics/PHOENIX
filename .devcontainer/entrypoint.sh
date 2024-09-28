#!/bin/bash

# Set up logging entrypoint stuff to build.log file in .devcontainer directory
rm /workspaces/PHOENIX/.devcontainer/build.log
sudo touch /workspaces/PHOENIX/.devcontainer/build.log
sudo chmod 777 /workspaces/PHOENIX/.devcontainer/build.log
{ printf "entrypoint.sh:\n"

###############################################################################
#                                                                             #
# Startup commands (do not put anything above this)                           #
#                                                                             #
###############################################################################

# ROS basic build and source
./build.sh

# Give permissions to input devices, like Xbox controller
sudo chmod +rx /dev/input/event*
# this one may be unneeded
sudo chmod +rx /dev/input/js*


###############################################################################
#                                                                             #
# Shutdown commands (do not put anything below this)                          #
#                                                                             #
###############################################################################
} &> /workspaces/PHOENIX/.devcontainer/build.log
