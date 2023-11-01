cmake_minimum_required(VERSION 3.17)
project(TEs-PRG1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(q1.cpp q1.cpp)
add_executable(q2.cpp q2.cpp)
add_executable(q3.cpp q3.cpp)
add_executable(q4.cpp q4.cpp)
