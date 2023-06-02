cmake_minimum_required(VERSION 2.8)
project(solution)

set(CMAKE_CXX_STANDARD 11)
# -std=c++11 用于gcc4.8.5支持c++11新标准
set(CMAKE_CXX_FLAGS "-std=c++11")

# 0000-0099
#add_executable(solution "0000-0099/0001.Two Sum/Solution.cpp")
add_executable(solution "0000-0099/0019.Remove Nth Node From End of List/Solution.cpp")