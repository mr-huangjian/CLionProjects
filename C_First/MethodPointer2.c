//
// Created by huangjian on 7/21/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

void populate_array(int * array, int arraySize, int (* getElement)(void )) {
    for (int i = 0; i < arraySize; ++i) {
        array[i] = getElement();
    }
}

// 获取当前时间的时间戳，单位是毫秒
// https://blog.csdn.net/wu694128/article/details/94542858
// tv_sec 秒
// tv_usec 微秒
long getTimestampMicrosecond() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000 + tv.tv_usec;
}

// 获取当前时间的时间戳，单位是秒
long getTimestampSecond() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

int getRandomValue() {
    // 随机数 http://c.biancheng.net/view/2043.html
    srand((unsigned)time(NULL) - rand());
    return rand();
}

/*int main() {
    int array[10];
    populate_array(array, 10, getRandomValue);

    for (int i = 0; i < 10; ++i) {
        printf("%d - %d\n", i, array[i]);
    }

    return 0;
}*/

