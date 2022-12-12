/**
 * @file 1-18-DeleteSpaces.c
 * @author AaronLi
 * @date 2022-12-03-11:01 AM
 * @description 编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行
 * @link 
 */

#include <stdio.h>

#define MAXNUM 1000
#define OUTOUTNUM 1000

void removeSpace(char s[]);

int getLine(char s[], int len);

int copy(char dst[], int nDstStart, int nDstLen, const char src[]);


int main() {
    char line[MAXNUM];
    char output[OUTOUTNUM];

    int j=0;

    int len= getLine(line ,MAXNUM);
    while (len>0){
        removeSpace(line);
        j= copy(output,j,OUTOUTNUM,line);
        len= getLine(line,MAXNUM);
    }
    printf("%s",output);
}

void removeSpace(char s[]) {
    int i, len;
    i = 0;

    /* Determining array Length */
    while ((s[i] != '\0') && (s[i] != '\n')) {
        i++;
    }
    len = i;

    /* Determines if the array is blank */
    for (i = 0; i < len; ++i) {
        if ((' ' == s[i])||('\n'==s[i])||('\t'==s[i])) {

        } else {
            break;
        }
    }

    if (i == len) {
        s[0] = '\0';
    } else {
        for (i = (len - 1); i >= 0; i--) {
            if ((s[i]==' ') || (s[i]='\t')) {
                s[i] = '\0';
            }
        }
    }
}

/**
 * @param char s[] ,int len
 * @return int i
 * @date 12/2/22 6:54 PM
 * @description Get input characters
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
       /* if (src[i] == '\0') {
            break;
        }*/
        i++;
        nDstStart++;
    }

    dst[nDstLen - 1] = '\0';                /* Make sure the last element of the array is '\0' */

    return nDstStart;
}