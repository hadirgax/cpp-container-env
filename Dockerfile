FROM ubuntu:latest as base

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update && apt-get install -y \
    --no-install-recommends \
    build-essential \ 
    ca-certificates \
    git \
    gdb \
    cmake \
    clang-format \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /tmp/* /var/tmp/*
    
# google-test
ARG NUM_CORES=1
WORKDIR /tmp
RUN git clone https://github.com/google/googletest.git -b release-1.10.0 && \
    mkdir -p googletest/_build && cd googletest/_build && \
    cmake ../ && make -j${NUM_CORES} && make install

WORKDIR /workspace
