//
// Created by huangjian on 7/29/21.
//

#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;

/*
int main() {
    int array[10];

    for (int i = 0; i < 10; ++i) {
        array[i] = 100 + i;
    }

    */
/*
     * setw( 13 )    13位右对齐填充后面的"Value", 不足位用空格填充
     * 即输出："Element{8个空格}Value"
     *//*

    cout << "Element" << setw( 13 ) << "Value" << endl;

    for (int j = 0; j < 10; j++) {
        cout << setw(7)<< j << setw(13) << array[j] << endl;
    }

    return 0;
}
*/
