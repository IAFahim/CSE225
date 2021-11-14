cmake_minimum_required(VERSION 3.20)
project(clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(clion ../Lab/Lab_6/Task_1/main.cpp ../Lab/Lab_6/Task_1/unsortedtype.cpp ../Lab/Lab_6/Task_1/unsortedtype.h)
