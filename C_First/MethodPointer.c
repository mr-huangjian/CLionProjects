//
// Created by huangjian on 7/21/21.
//

#include <stdio.h>

int max(int x, int y) {
    return x > y ? x : y;
}

/*
int main() {
    // 函数指针指向函数，函数指针可以像一般函数一样，用于调用函数、传递参数
    int (* p)(int, int) = max;

    int a, b, c, d;
    printf("请输入三个数字：");
    scanf("%d %d %d", &a, &b, &c);

    */
/* 与直接调用函数等价，d = max(max(a, b), c) *//*

    d = p(p(a, b), c);
    printf("max value is %d\n", d);

    return 0;
}*/
