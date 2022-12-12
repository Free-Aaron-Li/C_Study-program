//
// File name: 2-1-DistinguishUnsignedBetweenSigned.c
// Created by AaronLi
// Date: 2022-11-23-20
// Description:确定分别由signed和unsigned限定的char、short、int及long类型的变量的取值范围
//

#include <stdio.h>
#include <limits.h>

/* determine ranges of types */

int main(){
    /* signed types */
    printf("Signed char min = %d\n",SCHAR_MIN);
    printf("Signed char max = %d\n",SCHAR_MAX);
    printf("Signed short min = %d\n",SHRT_MIN);
    printf("Signed short max = %d\n",SHRT_MAX);
    printf("Signed int min = %d\n",INT_MIN);
    printf("Signed int max = %d\n",INT_MAX);
    printf("Signed long min = %ld\n",LONG_MIN);
    printf("Signed long max = %ld\n",LONG_MAX);

    /* unsigned types*/
    printf("Unsigned char max = %u\n", UCHAR_MAX);
    printf("Unsigned short max = %u\n",USHRT_MAX);
    printf("Unsigned int max = %u\n",UINT_MAX);
    printf("Unsigned long max = %lu\n",ULONG_MAX);
    return 0;
}

