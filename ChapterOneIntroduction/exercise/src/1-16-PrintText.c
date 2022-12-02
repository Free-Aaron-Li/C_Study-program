/**
 * @file 1-16-PrintText.c
 * @author AaronLi
 * @date 2022-12-02-6:27 PM
 * @description 编写一程序，打印输出长度大于80个字符的所有行
 * @link 
 */

#include <stdio.h>

#define MAXLINE 1000        /* The maximum value is MAXLINE */
#define MINNUM 80           /* The minimum value is MINNUM */

int getLine(char s[], int len);

int main() {
    char line[MAXLINE];
    int curLen = getLine(line, MAXLINE);

}

/**
 * @param char s[] ,int len
 * @return i
 * @date 12/2/22 6:54 PM
 * @description reading all lines from printText
 */

int getLine(char s[], int len) {        /* s[] is printText,len is MINNUM */
    int c, i, j;
    j = 0;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < (len - 2)) {
            s[j] = (char) c;          /* line still in boundaries*/
            ++j;
        }
    }

    if(c!=EOF){
        s[i]=(char)c;
        ++i;
    }

    s[i]='\0';
    return i;
}
