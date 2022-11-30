//
// File name: 1-7-EOFTest.c  
// Created by AaronLi  
// Date: 2022-11-20-22  
//
#include <stdio.h>

int main(){
    int n;
    while ((n=getchar())!= EOF)
        putchar(n);
    //printf("EOF is %d\n",EOF);
    return 0;
}
