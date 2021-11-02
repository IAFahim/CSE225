cmake_minimum_required(VERSION 3.20)
project(clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clion main.cpp unsortedtype.cpp unsortedtype.h studentInfo.cpp studentInfo.h MinMax.cpp MinMax.h)
