//
// Created by huangjian on 7/22/21.
//

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char * getProjectPath() {
    // 分配多大容量合适，如果赋值内容超过了容量会怎样？
    char buf1[1024];
    char * compilePath = getcwd(buf1, sizeof(buf1));
    char * lastDir = strrchr(compilePath, '/');

    char buf2[1024];
    memcpy(buf2, compilePath, strlen(compilePath) - strlen(lastDir));
    // 错误！！
    printf("dest = %s\n", buf2);
    return buf2;
}

/*
main() {
    char * projectPath = getProjectPath();
    printf("path: %s\n", projectPath);
}
*/
