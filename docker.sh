#!/bin/sh

docker build -t asm_training - <<DOCKERFILE_EOF || exit 1
FROM ubuntu:14.04
RUN dpkg --add-architecture i386 && \
	apt-get update && \
	apt-get install -y git sudo bash make vim build-essential && \
	rm -rf /var/lib/apt/list/*

WORKDIR /dojo/
CMD bash -i
DOCKERFILE_EOF

docker run -it --rm -v $(pwd):/dojo/ asm_training
