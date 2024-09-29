FROM ubuntu:disco

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

# RUN wget "http://releases.llvm.org/9.0.0/clang+llvm-9.0.0-x86_64-linux-gnu-ubuntu-18.04.tar.xz" -O clang.tar.xz && \
#     tar xf clang.tar.xz && \
#     cd clang* && \
#     cp -R * /usr/local

COPY .clang-format /.clang-format

COPY entrypoint.sh /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
