FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y lsb-release wget software-properties-common gnupg

ADD https://apt.llvm.org/llvm.sh llvm.sh
RUN chmod +x llvm.sh && ./llvm.sh 21

RUN apt-get install -y cmake clang-tidy-21

ENTRYPOINT ["/bin/bash"]
