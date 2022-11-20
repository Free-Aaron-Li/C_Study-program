//
// Created by AaronLi on 11/20/22.
//

#include <stdio.h>

/*  实现将一个数组中的元素头尾两端依次对调
*  */

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;  //第一步
    *x = *x ^ *y;  //第二步
    *y = *x ^ *y;  //第三步
}

int reverse_array(int a[], int cnt) {
    int first, last;  //首尾元素
    for (first = 0, last = cnt - 1; first <= last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
    return 0;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int cnt = 5;
    reverse_array(a, cnt);
    for (int c = 0; c < cnt; c++) {
        printf("%4.0d\n", a[c]);
    }
}


