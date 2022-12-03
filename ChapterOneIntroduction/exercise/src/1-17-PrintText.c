/**
 * @file 1-16-PrintText.c
 * @author AaronLi
 * @date 2022-12-02-6:27 PM
 * @description 编写一程序，打印输出长度大于80个字符的所有行
 * @link 
 */

#include <stdio.h>

#define MAXLINE 1000        /* The maximum value is MAXLINE */
#define MINNUM 8            /* The minimum value is MINNUM */
#define OUTPUT 1024         /* Array of output statements */

int getLine(char s[], int len);

int copy(char dst[], int nDstStart, int nDstLen, const char src[]);

/**
 * @date 12/2/22 11:34 PM
 * @description print lines longer than MINNUM
 */

int main() {
    char line[MAXLINE];                             /* current input line */
    char outPut[OUTPUT];

    int len;                                        /* current line length */
    int j = 0;

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > MINNUM) {
            j = copy(outPut, j, OUTPUT, line);
        }
    }

    printf("%s", outPut);
}

/**
 * @param char s[] ,int len
 * @return int i
 * @date 12/2/22 6:54 PM
 * @description
 */

int getLine(char s[], int len) {
    /* "i" is the return value of the string length */
    int c, i;
    i = 0;

    while ((c = getchar()) != EOF && (c != '\n')) {
        /* Since there are len elements in s, we have already read the input characters, we will leave the '\n' and '\0' characters */
        if (i < (len - 2)) {
            s[i] = (char) c;            /* line still in boundaries*/
            ++i;
        }
    }

    if (c != EOF) {
        s[i] = (char) c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

/**
 * @param output array 'dst', copied array 'src ', start element 'nDstStart', end element 'nDstLen'
 * @return nDstStart
 * @date 12/3/22 12:16 AM
 * @description copied from src to dst with nDstStart and nDstLen
 */

int copy(char dst[], int nDstStart, int nDstLen, const char src[]) {
    int i = 0;

    while (1) {
        if (nDstStart >= nDstLen) {         /* Array out of bounds judgment */
            break;
        }
        dst[nDstStart] = src[i];
        if (src[i] == '\0') {
            break;
        }
        i++;
        nDstStart++;
    }

    dst[nDstLen - 1] = '\0';                /* Make sure the last element of the array is '\0' */

    return nDstStart;
}