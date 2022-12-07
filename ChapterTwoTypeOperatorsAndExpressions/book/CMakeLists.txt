include_directories(.)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")
set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")


# 获取c文件相对于当前工作路径的相对路径，即文件名
# 工作路径${CMAKE_CURRENT_SOURCE_DIR}就是CMakeList.txt所在的文件夹
file (GLOB files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.c)
# 遍历每个文件名
foreach (file ${files})
    # 将去掉后缀的文件名存入exe变量（executable的缩写，不是代表.exe）
    string(REGEX REPLACE "(.+).c$" "\\1" exe ${file})
    # 分别生成add_executable(<name> <source>)命令
    add_executable (${exe} ${file})
endforeach ()