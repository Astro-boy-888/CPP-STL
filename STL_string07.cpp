#include <iostream>
#include <string>
using namespace std;

// string插入和删除
// - `string& insert(int pos, const char* s);` //插入字符串
// - `string& insert(int pos, const string& str);` //插入字符串
// - `string& insert(int pos, int n, char c);` //在指定位置插入n个字符c
// - `string& erase(int pos, int n = npos);` //删除从Pos开始的n个字符


void test01() {
    string str = "hello";

    //插入
    str.insert(1, "111"); //插入字符串

    cout << str << endl; //输出：h111ello

    //删除

    str.erase(1, 3); //删除从Pos开始的n个字符
    cout << str << endl; //输出：hello
}

int main() {
    test01();
    return 0;
}