#include <iostream>
#include <map>
#include <string>
#include <algorithm> 

using namespace std;

//map容器的大小和交换
/*
    - `size();` //返回容器中元素的数目
    - `empty();` //判断容器是否为空
    - `swap(st);` //交换两个集合容器
*/

void printMap(const map<int,int> &m)
{
    for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "------------------------------------" << endl;
}

void test01()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(4,40));    

    if (m.empty())
    {
        cout << "m为空" << endl;
    }
    else
    {
        cout << "m不为空" << endl;
        cout << "m的大小是" <<  m.size() << endl;
    }
}

void test02()
{
    map<int,int>m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));   

    map<int,int>m2;
    m2.insert(pair<int,int>(5,50));
    m2.insert(pair<int,int>(6,60));
    m2.insert(pair<int,int>(7,70));
    m2.insert(pair<int,int>(8,80));    
 
    //交换前
    cout << "交换前m1:" << endl;
    printMap(m1);
    cout << "交换前m2:" << endl;
    printMap(m2);

    m1.swap(m2);
    //交换后
    cout << "交换后m1:" << endl;
    printMap(m1);
    cout << "交换后m2:" << endl;
    printMap(m2);
}

int main()
{
    test01();
    test02();
    return 0;    
}