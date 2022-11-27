//
// File name: TimeTest.c
// Created by AaronLi
// Date: 2022-11-27-10
// Description: 计算机日期 程序Bug —— 查看time_t定义 位于/usr/include/time.h
//

#include <stdio.h>
#include <time.h>

int main()
{
    time_t biggest=0X7FFFFFFF;
    printf("the biggest time = %s\n", ctime(&biggest)); // the biggest time is Tue Jan 19 11:14:07 2038
    // 北京时间比UTC时间晚了8个小时
    printf("really the biggest time = %s\n", asctime(gmtime(&biggest))); // really the biggest time is Tue Jan 19 03:14:07 2038
    return 0;
}