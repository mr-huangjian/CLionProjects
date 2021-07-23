//
// Created by huangjian on 7/23/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * void * 类型表示未确定类型的指针。
 * void * 类型可以通过类型转换强制转换为任何其它类型的指针。
 *
 * 若预先知道数组的大小，那么定义数组时就比较容易，一旦定义则无法改变大小
 * 若预先不知道需要存储的文本长度，可以定义一个指针，该指针指向未定义所需内存大小的字符，后续再根据需求来分配内存
 */

/*
main() {
    char name[10];
    char * desc;

    // 内存不足导致超出，操作失败
    // strcpy(name, "Taylor Swift");

    strcpy(name, "huangjian");
    printf("name: %s\n", name);

    desc = (char *)malloc(50 * sizeof(char));
    if (desc == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(desc, "I love xiaonier");
    }
    printf("desc: %s\n", desc);


    desc = (char *)realloc(desc, 100 * sizeof(char));
    if (desc == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(desc, "I love xiaonier very much!");
    }
    printf("desc: %s\n", desc);

    free(desc);
}*/
