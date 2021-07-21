//
// Created by huangjian on 7/20/21.
// `static` 静态变量只会被初始化一次

#include <stdio.h>

void func1(void); // 函数声明

static int count = 10; // 全局变量

/*
int main() {
    while (count--) {
        func1();
    }
    return 0;
}
*/

void func1() {
    static int thingy = 5; // 局部变量
    thingy ++;
    printf("thingy: %2d, count: %d\n", thingy, count);
}

