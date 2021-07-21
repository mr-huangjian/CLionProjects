//
// Created by huangjian on 7/20/21.
//

#include <stdio.h>

// 函数声明
// void swap(int *, int *);
void swap(int *x, int *y);

// 引用调用
// 通过指针传递方式，形参为指向实参地址的指针

/*int main() {
    int a = 10, b = 20;
    printf("a: %d, b: %d\n", a, b); // a: 10, b: 20

    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b); // a: 20, b: 10

    return 0;
}*/

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
