//
// Created by huangjian on 7/21/21.
//

/**
 * char * 与 char [] 的区别
 *
 * https://www.jianshu.com/p/a4d12ed9db11
 */

#include <stdio.h>

/*
int main() {

    char * a = "hello"; // 可以被全新赋值，不可以被单独字符赋值
    char b[] = "hello"; // 不可以被全新赋值，可以被单独字符赋值

    char * c = "hello";
    char d[] = "hello";
    printf("a == c : %d\n", a == c); // true
    printf("b == d : %d\n", b == d); // false

    // a 是一个 char 型指针变量，其值（指向）可以改变
    a = "world";
    a = b;
    printf("a: %s\n", a); // a: hello

    // b 是一个 char 型数组，也是该数组首元素的地址，是常量，其值不可以改变
    // Array type 'char [6]' is not assignable
    // b = "world";
    b[0] = 'H';
    printf("b: %s\n", b); // b: Hello

    return 0;
}
*/
