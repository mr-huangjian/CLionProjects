//
// Created by huangjian on 7/23/21.
//
#include <stdio.h>

/**
 * 选择排序
 *
 * 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，然后，再从剩余未排序元素中继续寻找最小（大）元素，
 * 然后放到已排序序列的末尾。以此类推，直到所有元素均排序完毕。
 */

/*
swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
*/

sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {
        int min = i;

        // 在本轮循环中获取最小值的索引
        for (j = i + 1; j < len; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        // 交换该值
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}


main() {
    printf("%s\n\n", __FILE_NAME__);

    int arr[] = {1, 3, 10, 5, 8, 6};

    int len = (int) sizeof(arr) / sizeof(*arr);
    printf("len: %d\n", len);

    sort(arr, len);
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
