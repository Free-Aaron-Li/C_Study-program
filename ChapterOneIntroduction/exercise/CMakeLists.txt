include_directories(.)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")

# 这里的“+”和“-”是你想创建的子项目的配置器名称，注意“+”和“-”……不能与现有任何一个名称相同，“*”和“/”是子项目内源文件名称
# “+”与“*”指尖以及“-”与“/”之间都有空格

add_executable(2-10-InplaceSwap 2-10-InplaceSwap.c)
add_executable(1-6-GetcharTest 1-6-GetcharTest.c)
add_executable(1-7-EOFTest 1-7-EOFTest.c)