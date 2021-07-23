//
// Created by mr.huangjian on 2021/7/22.
//
#include <stdio.h>

int factorial(int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

/*
main() {
    int a = 4;
    printf("value: %d\n", factorial(a)); // 24
}
*/
