//
// Created by huangjian on 7/29/21.
//

#include <iostream>

using namespace std;

/**
 * 函数参数：
 *  如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。
 *  形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。
 */

/**
 * 传值调用:
 *  该方法把参数的实际值赋值给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
 */
void swap1(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


/**
 * 指针调用:
 *  该方法把参数的地址赋值给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
 */
void swap2(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * 引用调用:
 *  该方法把参数的引用赋值给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
 */
void swap3(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

/*int main() {
    int a, b;

    a = 3, b = 4;
    swap1(a, b);
    cout << "1. a: " << a << ", b: " << b << endl;

    a = 3, b = 4;
    swap2(&a, &b);
    cout << "2. a: " << a << ", b: " << b << endl;

    a = 3, b = 4;
    swap3(a, b);
    cout << "3. a: " << a << ", b: " << b << endl;


    return 0;
}*/

/*
 * Lambda
    [](int x, int y){ return x < y ; }

    []      // 沒有定义任何变量。使用未定义变量会引发错误。
    [x, &y] // x以传值方式传入（默认），y以引用方式传入。
    [&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
    [=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
    [&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
    [=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
    [this]  对于[=]或[&]的形式，lambda 表达式可以直接使用 this 指针
 */
