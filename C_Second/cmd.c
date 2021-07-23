//
// Created by huangjian on 7/23/21.
//

#include <stdio.h>

/**
 * 主函数（程序入口）
 * @param argc 命令行参数的总个数
 * @param argv 命令行参数数组
 * @return
 */
/*int main(int argc, char * argv[]) {
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; ++i) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    return 0;
}*/

/**
 * $ gcc cmd.c
 *
 * $ ./a.out hello world
 *
 * argc: 3
 * argv[0]: ./a.out
 * argv[1]: hello
 * argv[2]: world
 *
 * $ ./a.out "love xiaonier"
 *
 * argc: 2
 * argv[0]: ./a.out
 * argv[1]: love xiaonier
 *
 */

/**
 * gcc --help
 * -o <file>               Write output to <file>
 *
 */
