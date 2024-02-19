FROM osrf/ros:humble-desktop

# Add nonroot user with same UID and GID as your host system
# (copied from https://code.visualstudio.com/remote/advancedcontainers/add-nonroot-user#_creating-a-nonroot-user)
ARG USERNAME=astro-dev
ARG USER_UID=1000
ARG USER_GID=$USER_UID
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME \
    && apt-get update \
    && apt-get install -y sudo \
    && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
    && chmod 0440 /etc/sudoers.d/$USERNAME
# Switch from root to user
USER $USERNAME

# Add user to video group to allow access to webcam
RUN sudo usermod --append --groups video $USERNAME

# Update all packages
RUN sudo apt update && sudo apt upgrade -y

# Install Git
RUN sudo apt install -y git

# Rosdep update
RUN rosdep update

# Source the ROS setup file
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc

###############################################################################
#                                                                             #
# Add dependencies below using RUN <command you used to install>              #
#                                                                             #
###############################################################################
RUN sudo apt-get install -y clang-format

# perception
RUN sudo apt-get install -y python3-pip
RUN pip3 install pyrealsense2 opencv-python
RUN sudo apt install -y udev
RUN sudo apt install -y git libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev
RUN sudo git clone https://github.com/IntelRealSense/librealsense.git
WORKDIR /librealsense
RUN sudo mkdir build
WORKDIR /librealsense/build
RUN sudo cmake ..
RUN sudo make -j$(nproc)
RUN sudo make install
RUN sudo cp ../config/99-realsense-libusb.rules /etc/udev/rules.d/
RUN sudo service udev restart
RUN sudo udevadm control --reload
RUN sudo udevadm trigger
WORKDIR /



# for debugging usb devices. not necessary per se
RUN sudo apt-get install usbutils
