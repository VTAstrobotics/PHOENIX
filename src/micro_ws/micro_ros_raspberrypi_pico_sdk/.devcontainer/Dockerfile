FROM ros:humble-ros-base-jammy

ARG USERNAME=Astrobotics
ARG UID=1000
ARG GID=$UID



# Install some dependencies packages
RUN apt update  \
    && apt upgrade  -y \
    && apt install -y --no-install-recommends \
    software-properties-common \
    ros-humble-desktop \
    python3-pip \
    xauth \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/* 


RUN add-apt-repository universe

RUN apt update

RUN apt install -y apt-transport-https

RUN apt install -y cmake g++ gcc-arm-none-eabi doxygen libnewlib-arm-none-eabi git python3 


# Create and switch to user
RUN groupadd -g $GID $USERNAME \
    && useradd -lm -u $UID -g $USERNAME -s /bin/bash $USERNAME \
    && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers
USER $USERNAME

# Create workspace so that user own this directory
RUN mkdir -p /home/$USERNAME/ros2_ws/src
WORKDIR /home/$USERNAME/ros2_ws

# Copy configuration files
RUN echo 'source /opt/ros/'$ROS_DISTRO'/setup.bash' >> /home/$USERNAME/.bashrc \
    && echo 'source /home/'$USERNAME'/ros2_ws/install/setup.bash' >> /home/$USERNAME/.bashrc

# Setup entrypoint
COPY ./ros_entrypoint.sh /
ENTRYPOINT ["/ros_entrypoint.sh"]
CMD ["bash"]
