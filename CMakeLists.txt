# cmake_minimum_required(VERSION <specify CMake version here>)
project(Exercise_5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp IntArray.cpp CircularBuffer.cpp CircularBuffer.h)
add_executable(Exercise_5 ${SOURCE_FILES})