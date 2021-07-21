//
// Created by huangjian on 7/21/21.
//

#include <stdio.h>

/*int main() {
    int value = 10;     *//* 实际变量的声明 *//*

    int * pointer;      *//* 指针变量的声明 *//*
    pointer = &value;   *//* 在指针变量中存储 value 的地址 *//*

    printf("value的内存地址是：%p\n", &value);  // 访问实际变量的地址 0x7ffeeb3df9a8
    printf("value的内存地址是：%p\n", pointer); // 访问指针变量中存储的地址 0x7ffeeb3df9a8
    printf("value的值是：%d\n", * pointer);    // 访问指针变量中存储的地址的实际值 10

    int * ptr = NULL;
    printf("ptr 的地址是 %p\n", ptr); // 0x0
    printf("ptr 的值是 %d\n", ptr);  // 0

    // 检查空指针
    if (ptr) {
        printf("ptr is NOT NULL.");
    } else {
        printf("ptr is NULL.");
    }

    return 0;
}*/

/**
 * 指针即内存地址，指针变量是用来“存放内存地址的变量” ！
 * int* pointer = &value;
 *
 * 在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值
 * 赋为 NULL 值的指针被称为空指针，NULL 指针是一个定义在标准库中的值为零的常量
 * 内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置
 *
 * https://www.runoob.com/cprogramming/c-pointers.html
 */
