#include <iostream>
#include <string>
using namespace std;

//pair队组：成对出现的数据，利用对组可以返回两个数据
/*
- `pair<type, type> p ( value1, value2 );`
- `pair<type, type> p = make_pair( value1, value2 );`
*/

void test01()
{
    //第一种方式
    pair<string,int> p("Tom",20);

    cout << "姓名："  << p.first << " 年龄：" << p.second << endl;

    //第二种方式
    pair<string,int> p1 = make_pair("Tom",20);
    cout << "姓名："  << p1.first << " 年龄：" << p1.second << endl;
}

int main()
{
    test01();
    return 0;
}