//
// Created by huangjian on 7/29/21.
//

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 数组指针指向数组中第一个元素的地址
 *
 * 使用数组名作为常量指针是合法的，反之亦然。因此，*(runoobAarray + 4) 是一种访问 runoobAarray[4] 数据的合法方式
 * 一旦您把第一个元素的地址存储在 p 中，您就可以使用 *p、*(p+1)、*(p+2) 等来访问数组元素
 */


/*
int main() {
    int array[10] = { 1, 2, 3, 4, 5 };
    int *p = array;

    cout << p << endl;  // 0x7ffeea404990
    cout << *p << endl; // 1
    cout << *(p + 1) << endl; // 2

    cout << endl;

    cout << array << endl; // 0x7ffeea404990
    cout << *array << endl; // 1
    cout << *(array + 1) << endl; // 2

    return 0;
}
*/
