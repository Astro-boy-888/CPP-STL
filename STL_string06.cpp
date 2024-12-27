#include <iostream>
#include <string>
using namespace std;

// string中单个字符存取方式有两种

// - `char& operator[](int n);` //通过[]方式取字符
// - `char& at(int n);` //通过at方法获取字符


void test01() 
{
    string str = "hello";
    //读取单个字符
    for (int i = 0; i < str.size(); i++) 
    {
        cout << "str[" << i << "] = " << str[i] << " "; // 输出h,e,l,l,o
        cout << "str.at(" << i << ") = " << str.at(i) ; // 输出h,e,l,l,o
        cout << endl;
    }
    //修改单个字符
    str[0] = 'H';
    cout << "str = " << str << endl; // 输出Hello
    str.at(1) = 'E';
    cout << "str = " << str << endl; // 输出HEllo
}

int main() 
{
    test01();
    return 0;
}