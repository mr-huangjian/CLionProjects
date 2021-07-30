//
// Created by huangjian on 7/30/21.
//

#include <iostream>

using namespace std;

int main() {
    // char name[50];
    string name;

    cout << "请输入您的名称： ";
    cin >> name;
    cout << "您的名称是： " << name << endl;

    char str[] = "Unable to read....";
    cerr << "Error message : " << str << endl; // 醒目的红色文字
    clog << "Error message : " << str << endl; // 醒目的红色文字

    // more: https://www.runoob.com/cplusplus/cpp-basic-input-output.html

    return 0;
}
