cmake_minimum_required(VERSION 3.20)
project(clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clion main.cpp binarysearchtree.cpp binarysearchtree.h quetype.cpp quetype.h)
