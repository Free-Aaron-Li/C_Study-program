//
// File name: 1-6-GetcharTest.cpp  
// Created by AaronLi  
// Date: 2022-11-20-22  
//

#include <stdio.h>

int main() {
    /* 将输入复制到输出 */
    /*int word;
    while ((word = getchar()) !=EOF){
        printf("%c\n", word);
        printf("%d - at EOF\n", word);
    }

    printf("EOF is %d\n", EOF);*/

    /* 统计输入字符数 */
    /*double word;

    for (word = 0; getchar() != EOF; ++word)
        ;
    printf("%.0f\n", word);*/

    /* 统计输入的行数 */
    int word, line;
    line=0;
    while ((word = getchar())!=EOF){
        if (word == '\n') ++line;
    }
    printf("%d\n", line);

    return 0;
}
