#include <iostream>
#include <map>
#include <string>
#include <algorithm> 

using namespace std;

//map容器的构造和赋值

/*
    **构造：**

    - `map<T1, T2> mp;` //map默认构造函数:
    - `map(const map &mp);` //拷贝构造函数

    **赋值：**

    - `map& operator=(const map &mp);` //重载等号操作符
*/

void printMap(const map<int,int> &m)
{
    for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "--------------------" << endl;
}

void test01()
{   
    //创建map容器 两个参数
    map<int,int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,50));
    m.insert(pair<int,int>(2,40));

    printMap(m);
    //会依照key自动排序 并且要求没有重复的key

    //拷贝构造
    map<int,int>m2(m);
    printMap(m2);

    //赋值
    //重载operator=
    map<int,int>m3;
    m3 = m2;
    printMap(m3);
}

int main()
{
    test01();
    return 0;
}