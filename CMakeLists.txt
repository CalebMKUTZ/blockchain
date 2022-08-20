cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)   

project(Blockchain)

add_executable(Blockchain main.cpp src/sha256.cpp src/block.cpp src/blockchain.cpp)