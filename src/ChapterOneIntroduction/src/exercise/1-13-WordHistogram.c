//
// File name: WordHistogram.c
// Created by AaronLi
// Date: 2022-11-21-18
// Description: 打印输入中单词长度的直方图
//
#include <stdio.h>

#define MAXHIST 15      /* max length of histogram  */
#define MAXWORD 11      /* max length of a word     */
#define IN 1            /* inside a word            */
#define OUT 0           /* outside a word           */

/* print horizontal histogram                       */
int main() {
    int c, i, nc, state;
    int len;            /* length of each bar       */
    int maxValue;       /* maximum value for wl[]   */
    int ovFlow;         /* number of overflow word  */
    int wl[MAXWORD];    /* word length counters     */

    state = OUT;
    nc = 0;             /* number of chars in a word*/
    ovFlow = 0;         /* number of words >=MAXWORD*/
    for (i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state=OUT;
            if(nc>0){
                if(nc <MAXWORD)
                    ++wl[nc];
                else
                    ++ovFlow;
            }
            nc =0;
        }else if(state == OUT){
            state=IN;
            nc =1;      /* beginning of a new word */
        } else
            ++nc;       /* inside a word           */
    }
    maxValue=0;
    for (i = 1; i < MAXWORD; ++i) {
       if(wl[i] >maxValue)
           maxValue=wl[i];
    }
    for (i = 1; i < MAXWORD; ++i) {
        printf("%5d -%5d : ",i,wl[i]);
        if(wl[i]>0){
            if((len=wl[i]*MAXHIST/maxValue)<=0)
                len=1;
        } else
            len=0;
        while (len>0){
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if(ovFlow>0)
        printf("There are %d words >= %d\n",ovFlow,MAXWORD);
}
