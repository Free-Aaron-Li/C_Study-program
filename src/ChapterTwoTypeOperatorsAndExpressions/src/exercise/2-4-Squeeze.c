/**
 * @file 2-4-Squeeze.c
 * @author AaronLi
 * @date 2022-12-13-上午11:07
 * @description
 * @link 
 */

#include <stdio.h>

/**
 * @date 22-12-13 下午5:02
 * @description 自定义strcat函数，用来连接两个字符串
 */

void my_strcat(char s[], const char t[]) {
    int i, j;
    i = j = 0;

    while (s[i] != '\0')        /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0');
}

/**
 * @date 22-12-13 下午7:48
 * @description squeeze函数删除指定字符
 */

void squeeze(char s[], char t) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != t)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

/**
 * @date 22-12-13 下午9:00
 * @description 编写delete函数，将字符串s1中任何和字符串s2中的字符匹配的字符都删除
 */
void delete(char s[], char t[]) {

}

int main() {
    char s[100] = "123 abc this is good day!";      /* Prevents arrays from crossing boundaries */
    char e[100] = "45678998087098";
    my_strcat(s, e);

    for (int i = 0; i < 100 && s[i] != '\0'; ++i) {
        printf("%c", s[i]);
    }

    printf("\n");
    squeeze(s, ' ');
    for (int i = 0; i < 100 && s[i] != '\0'; ++i) {
        printf("%c", s[i]);
    }

}