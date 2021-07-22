//
// Created by huangjian on 7/22/21.
//

#include <stdio.h>

main() {
    printf("File: %s\n", __FILE__ ); // /Volumes/Data/CLionProjects/C_Second/preprocessor.c
    printf("Date: %s\n", __DATE__ ); // Jul 22 2021
    printf("Time: %s\n", __TIME__ ); // 16:34:18
    printf("Line: %d\n", __LINE__ ); // 11
    printf("ANSI: %d\n", __STDC__ ); // 1

}

