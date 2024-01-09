# FROM ros:humble-ros-base-jammy

# WORKDIR /workspaces/PHOENIX

# # general installs
# RUN apt-get update && apt-get install -y --no-install-recommends \
#     ros-humble-desktop=0.10.0-1* \
#     python3 \
#     python3-pip \
#     && pip3 install setuptools==58.2.0 \
#     && rm -rf /var/lib/apt/lists/*
