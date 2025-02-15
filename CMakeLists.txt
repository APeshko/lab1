cmake_minimum_required(VERSION 3.10)

project(lab1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Укажите директорию с исходными файлами
set(SOURCE_DIR src)

add_executable(lab1_executable src/main.cpp src/utils.cpp scr/utils.hpp)
