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
cd /workspaces/PHOENIX/
./build.sh

# Give permissions to input devices, like Xbox controller
printf "[INFO]: If you get an error like \"chmod: cannot access '/dev/input/js*': No such file or directory\" do not worry. If it ALSO says \"chmod: cannot access '/dev/input/event*': No such file or directory\" AND you have a controller plugged in, there may be an issue with seeing the controller.\n"
sudo chmod +rx /dev/input/event*
# this one may be unneeded
sudo chmod +rx /dev/input/js*


###############################################################################
#                                                                             #
# Shutdown commands (do not put anything below this)                          #
#                                                                             #
###############################################################################
} &> /workspaces/PHOENIX/.devcontainer/build.log

exit 0
