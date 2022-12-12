/**
 * @file 1-14-FrequencyOfWords.c
 * @author AaronLi
 * @date 2022-11-29-20
 * @description 编写一个程序，打印输入中各个字符出现频率的直方图
 * @link
 */
#include <stdio.h>

int main() {
    int c;
    int words[26];      // Type of word
    for (int i = 0; i < 26; ++i) {
        words[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ((c >= 'a') && (c <= 'z')) {
            words[c - 'a']++;
        }
    }

    for (int m = 0; m < 26; m++) {
        putchar(m + 'a');
        putchar('|');
        for (int j = 0; j < words[m]; j++) {
            putchar('*');
        }
        printf("\n");
    }
}

