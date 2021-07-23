//
// Created by huangjian on 7/23/21.
//

#include <stdio.h>
#include <stdarg.h>

/**
 * 取平均数
 * @param count 可变参数的总个数
 * @param ...
 * @return
 */
double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }

    return sum / count;
}

/*
main() {
    printf("result: %lf\n", average(3,  1, 7, 10));
}*/
