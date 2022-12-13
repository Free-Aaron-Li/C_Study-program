cmake_minimum_required(VERSION 3.22)
project(C_Workspace C CXX)

set(CMAKE_C_STANDARD 99)

# 选择编译器
set (CMAKE_C_COMPILER "/usr/bin/gcc-8")
set (CMAKE_CXX_COMPILER "/usr/bin/g++-8")

add_subdirectory(src)