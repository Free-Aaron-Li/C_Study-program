//
// File name: 1-6-Array.c
// Created by AaronLi
// Date: 2022-11-29-16
// Description: 编写一个程序，以统计各个数字、空白符（包括空格符、制表符及换行符）以及其他字符出现的次数。
//
#include <stdio.h>

int main() {
    int c;

    int nWhiteCount = 0;    // Blank space
    int nOtherCount = 0;    // Other characters
    int nDigit[10];         // Array of digits
    for (int i = 0; i < 10; ++i) {
        nDigit[i] = 0;
    }

    c = getchar();
    while (c != EOF) {
        if ((' ' == c) || (c == '\t') || (c == '\n')) {
            nWhiteCount++;
        } else if (c >= '0' && c <= '9') {
            nDigit[c - '0']++;
        } else {
            nOtherCount++;
        }
        c = getchar();
    }

    printf("Digits:\n");
    for (int m = 0; m < 10; ++m) {
        printf("%d ", nDigit[m]);
    }
    printf("\nblank spaces: %d\n", nWhiteCount);
    printf("other characters: %d\n", nOtherCount);

}