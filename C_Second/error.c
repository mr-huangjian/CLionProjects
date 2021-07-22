//
// Created by mr.huangjian on 2021/7/22.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

/*main() {
    int errnum;

    FILE * fp = fopen("notExist.txt", "r");
    if (fp == NULL) {
        errnum = errno;
        fprintf(stderr, "error.code = %d\n", errno); // error.code = 2
        perror("通过 perror 输出错误"); // 通过 perror 输出错误: No such file or directory
        fprintf(stderr, "打开文件错误: %s\n", strerror(errnum)); // 打开文件错误: No such file or directory
        exit(EXIT_FAILURE); // OR: -1
    } else {
        fclose(fp);
    }
    exit(EXIT_SUCCESS);  // OR: 0
}*/

/**
 * errno            是一个全局变量，表示在函数调用期间发生的错误码
 * fprintf(..)      发送格式化输出到流 stderr stream 中
 * perror()         输出内容"{你传递的字符串}: {errno 的错误描述}"
 * strerror(errno)  将 errno 错误码转换为对应的错误描述
 * exit(code)       退出程序
 */
