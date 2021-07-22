//
// Created by huangjian on 7/22/21.
//

#include <stdio.h>

int main() {
    /*int c;

    printf( "Enter a value:\n");
    c = getchar();

    printf( "You entered: \n");
    putchar(c);*/


    /*char str[100]; // 或 *str

    printf("Enter a value:\n");
    gets(str);

    printf( "You entered: \n");
    puts(str);*/


    char str[100];
    int i;

//    int	 printf(const char * __restrict, ...) __printflike(1, 2);
//    int	 scanf(const char * __restrict, ...) __scanflike(1, 2);

/**
 * scanf 为什么要取地址，而 printf 直接使用变量名
 * https://blog.csdn.net/weixin_39846515/article/details/79177776
 *
 * 变量名传递过去的是当前变量的一个拷贝，在函数中对这些变量进行改变是不影响函数外这些变量的值的，
 * 为了得到结果并影响到这些变量，只有传递地址，或者对地址的引用。
 *
 * 采用取地址是为了改变变量的值，按照上述可知，若采用变量名，变量的值仅在 scanf 这个函数中发生改变，函数之外的变量值没有变化，
 * 也就是说变量的值并不是最终键盘上输入的值。为了让变量的值发生彻底待变，需要在 scanf 函数中采用取地址值让变量的值发生改变。
 */

    printf("Enter a value:\n");
    scanf("%s %d", str, &i);
    printf("You entered: %s %d\n", str, i);

    return 0;
}
