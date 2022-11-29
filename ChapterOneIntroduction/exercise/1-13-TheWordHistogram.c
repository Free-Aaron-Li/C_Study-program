/**
 * @file 1-13-TheWordHistogram.c
 * @author AaronLi
 * @date 2022-11-29-17
 * @description 编写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制
 * @link
 */

#include <stdio.h>

#define WORD_OUT 0      // outside a word
#define WORD_IN 1       // inside a word
#define MAXWORD 101     // maximum word

int main() {
    int c;
    int word_st = WORD_OUT;   // word starts
    int len;                  // length of each bar
    int maxvalue;             // maximum value for word[]
    int word[MAXWORD];            // word length counters
    for (int i = 0; i < MAXWORD; ++i) {
        word[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ((' ' == c) || ('\n' == c) || ('\r' == c)) {
            if (WORD_IN == word_st) {
                if ((len > 0) && (len <= 100)) {
                    word[len]++;
                }
            }
            len = 0;
            word_st = WORD_OUT;
        } else {
            len++;
            word_st = WORD_IN;
        }
    }

    /**
     * @date 11/29/22 7:12 PM
     * @description Calculate word length
     */

    for (int m = 0; m < MAXWORD; ++m) {
        if (word[m] > 0) {
            maxvalue = m;
        }
    }

    /**
     * @date 11/29/22 7:35 PM
     * @description printf the answer
     */

    for (int h = maxvalue; h > 0; --h) {
        printf("%03d |", h);
        for (int m = 0; m < word[h]; ++m) {
            printf("*");
        }
        printf("\n");
    }
}
