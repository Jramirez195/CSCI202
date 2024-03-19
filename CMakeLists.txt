cmake_minimum_required(VERSION 3.26)
project(CSCI202)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("Module One")

add_executable(CSCI202
        "Module One/M01_1_OO.cpp"
        "Module One/M01_1_OO.h")
