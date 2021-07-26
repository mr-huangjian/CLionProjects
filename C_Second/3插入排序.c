//
// Created by huangjian on 7/23/21.
//
#include <stdio.h>

/**
 * 插入排序
 * https://www.runoob.com/data-structures/insertion-sort.html
 *
 * 对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
 * 使用双层循环，外层循环对除了第一个元素之外的所有元素，内层循环对当前元素前面有序表进行待插入位置查找，并进行移动。
 */

printArrayIndex(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf(" %3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf(" ---");
    }
    printf("\n");
}

printArray(int arr[], int len, char * placeholder) {
    for (int i = 0; i < len; i++) {
        printf(" %3d", arr[i]);
    }
    if (placeholder != NULL) {
        printf("  (%s)", placeholder);
    }
    printf("\n");
}

sort(int arr[], int len) {
    printArray(arr, len, NULL);

    int i, j, temp;
    for (i = 1; i < len; i++) {
        temp = arr[i]; // 待排序的元素

        for (j = i; j > 0 && arr[j - 1] > temp; j--) {
            arr[j] = arr[j - 1]; // 对已排序元素，进行重新移动
        }

        arr[j] = temp; // 跳出循环，插入到最后一次的位置上

        // 字符串格式化
        // https://www.runoob.com/cprogramming/c-function-sprintf.html

        char buffer[1024];
        sprintf(buffer, "第%d个元素向前排序-插入到第%d个元素", i, j);
        printArray(arr, len, buffer);
    }

    printf("\n");
}

main() {
    printf("%s\n\n", __FILE_NAME__);

    int arr[] = {1, 10, 5, 3, 8, 6};

    int len = (int) sizeof(arr) / sizeof(*arr);
    printf("len: %d\n", len);

    printArrayIndex(arr, len);

    sort(arr, len);
    for (int i = 0; i < len; ++i) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
