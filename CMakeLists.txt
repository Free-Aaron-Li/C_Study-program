cmake_minimum_required(VERSION 3.22)
project(C_Workspace C)

set(CMAKE_C_STANDARD 99)

# 保留中间文件
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")


add_subdirectory(ChapterOneIntroduction)
add_subdirectory(ChapterTwoTypeOperatorsAndExpressions)
add_subdirectory(ExpertCProgramming)