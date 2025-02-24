cmake_minimum_required(VERSION 3.10)

project(lab1)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab src/main.cpp src/utils.cpp)
include_directories(src/utils.h)