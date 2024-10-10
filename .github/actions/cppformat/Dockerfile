FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
        git \
        jq \
        wget \
        xz-utils

# install clang-format version 16
RUN apt-get install -y lsb-release \
    wget \
    software-properties-common \
    gnupg \
    && wget https://apt.llvm.org/llvm.sh \
    && chmod +x llvm.sh \
    && ./llvm.sh 16 \
    && apt-get install -y clang-format-16 \
    && ln -s $(which clang-format-16) /usr/local/bin/clang-format

COPY .clang-format /.clang-format

COPY entrypoint.sh /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
