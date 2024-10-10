FROM ros:humble-ros-base-jammy

RUN apt-get update && apt-get install -y --no-install-recommends \
    ros-humble-desktop=0.10.0-1* \
    python3 \
    python3-pip \
    && pip3 install setuptools==58.2.0 \
    && rm -rf /var/lib/apt/lists/*

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

# Update all packages (bloat, but dev container so we feel worth it. do not recommend for final container)
RUN sudo apt update && sudo apt upgrade -y

# Install Git
RUN sudo apt install -y git

# Rosdep update
RUN rosdep update

# Source the ROS setup file
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc
RUN echo "source /workspaces/PHOENIX/src/main_ws/install/setup.bash" >> ~/.bashrc

###############################################################################
#                                                                             #
# Add dependencies below using RUN <command you used to install>              #
#                                                                             #
###############################################################################
# install clang-format version 16
RUN sudo apt-get install -y lsb-release \
    wget \
    software-properties-common \
    gnupg \
    && sudo wget https://apt.llvm.org/llvm.sh \
    && sudo chmod +x llvm.sh \
    && sudo ./llvm.sh 16 \
    && sudo apt-get install -y clang-format-16 \
    && sudo ln -s $(which clang-format-16) /usr/local/bin/clang-format
