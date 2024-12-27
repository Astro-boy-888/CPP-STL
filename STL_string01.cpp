#include <iostream>
#include <string>
using namespace std;

//string的构造
/*
- string(); //创建**一个空的字符串** 例如: string str;
- string(const char* s); //使用字符串s初始化
- string(const string& str); //使用一个string对象初始化另一个string对象 **拷贝构造**
- string(int n, char c); //使用n个字符c初始化
 */

void test01()
{
    string s1;

    const char *str = "hello world";
    string s2(str);
    cout << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    string s4(5, 'a');
    cout << s4 << endl;

}

int main()
{   
    test01();
    return 0;
}

/*
    output:
    hello world
    hello world
    aaaaa
*/