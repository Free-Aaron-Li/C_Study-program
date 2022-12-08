/**
 * @file 2-7-TypeConversion.c
 * @author AaronLi
 * @date 2022-12-07-下午3:28
 * @description
 * @link
 */

#include <stdio.h>
#include <limits.h>

int main(){
    // 平级转换，不会丢失任何信息，16进制内容不会有任何变化
    unsigned char a =UCHAR_MAX;
    char a1=(char)a;
    printf("a1\n");
}