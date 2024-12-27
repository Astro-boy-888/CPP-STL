#include <iostream>
#include <string>
using namespace std;

// string子串 
// string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串

void test01() 
{
    string str = "abcdef";

    string subStr = str.substr(1, 3); // 从第2个字符开始，取3个字符

    cout << "Original string: " << str << endl;
    cout << "Substring: " << subStr << endl;

}

void test02() 
{
    string email = "ros2@gmail.com";

    int atPos = email.find('@'); // 返回@符号的位置
    cout << "At position: " << atPos << endl;

    string domain = email.substr(0, atPos); // 取出@之前的字符串作为用户名
    cout << "username: " << domain << endl;
}

int main() {
    test01();
    test02();
    return 0;

}