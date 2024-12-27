#include <iostream>
#include <string>
using namespace std;

// string 查找和替换
/*
- `int find(const string& str, int pos = 0) const;` //查找str第一次出现位置,从pos开始查找
- `int find(const char* s, int pos = 0) const;` //查找s第一次出现位置,从pos开始查找
- `int find(const char* s, int pos, int n) const;` //从pos位置查找s的前n个字符第一次位置
- `int find(const char c, int pos = 0) const;` //查找字符c第一次出现位置
- `int rfind(const string& str, int pos = npos) const;` //查找str最后一次位置,从pos开始查找
- `int rfind(const char* s, int pos = npos) const;` //查找s最后一次出现位置,从pos开始查找
- `int rfind(const char* s, int pos, int n) const;` //从pos查找s的前n个字符最后一次位置
- `int rfind(const char c, int pos = 0) const;` //查找字符c最后一次出现位置
- `string& replace(int pos, int n, const string& str);` //替换从pos开始n个字符为字符串str
- `string& replace(int pos, int n,const char* s);` //替换从pos开始的n个字符为字符串s
*/

//查找
void test01()
{   
    //find
    string str1 = "abcdefg";

    int pos = str1.find("de"); //查找"cd"第一次出现位置

    cout << "find(de): " << pos << endl; //结果为3 第一次出现的位置从0开始数

    int pos1 = str1.find("df"); //
    cout << "find(df): " << pos1 << endl; //结果为-1 没有找到返回-1
 
    //rfind 
    int pos2 = str1.rfind("fg"); //查找"fg"最后一次出现位置
    cout << "rfind(fg): " << pos2 << endl; //结果为3 最后一次出现的位置从0开始数

    //find和rfind的区别
    //find从左往右查找,rfind从右往左查找

}

//替换
void test02()
{
    string str1 = "abcdefg";
    //replace
    //`string& replace(int pos, int n, const string& str);` //替换从pos开始n个字符为字符串str
    str1.replace(1,3,"1111"); //替换从1开始的3个字符"bcd"为"1111"
    cout << "replace(1,3,1111): " << str1 << endl; //结果为"a1111fg"
}


int main()
{   
    test01();
    test02();
    return 0;
}

/*
    Output:
    find(de): 3
    find(df): -1
    rfind(fg): 5
    replace(1,3,1111): a1111efg
*/