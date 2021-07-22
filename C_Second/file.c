//
// Created by huangjian on 7/22/21.
//
#include <stdio.h>

/**
 * https://www.runoob.com/cprogramming/c-file-io.html
 * @return
 */

/*
main() {
    FILE * fp = fopen("/Users/huangjian/Desktop/test/c.txt", "w+");
    fprintf(fp, "hello, world!!!!!\n");
    fputs("hello, cc.\n", fp);
    fclose(fp);
}
*/

/*
main() {
    */
/**
        1. hello,
        2.  world!!!!!

        3. hello, cc.
     *//*

    FILE * fp = fopen("/Users/huangjian/Desktop/test/c.txt", "r");

    char buf[255];
    fscanf(fp, "%s", buf);
    printf("1. %s\n", buf);

    fgets(buf, 255, fp);
    printf("2. %s\n", buf);

    fgets(buf, 255, fp);
    printf("3. %s\n", buf);

    fclose(fp);
}
*/
