//
// Created by huangjian on 7/23/21.
//
#include <stdio.h>

/**
 * 冒泡排序
 * https://www.cnblogs.com/bigdata-stone/p/10464243.html
 *
 * 依次比较相邻的两个数，将比较小的数放在前面，比较大的数放在后面。
 * N个数字要排序完成，总共进行N-1趟排序，每i趟的排序次数为(N-i)次，所以可以用双重循环语句，外层控制循环多少趟，内层控制每一趟的循环次数
 */

/*sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}*/


/*
main() {
    int arr[] = {1, 3, 10, 4, 8, 6};

    int len = (int) sizeof(arr) / sizeof(*arr);
    printf("len: %d\n", len);

    sort(arr, len);
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
*/
