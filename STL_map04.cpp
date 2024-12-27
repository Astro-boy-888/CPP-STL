#include <iostream>
#include <map>
#include <string>
#include <algorithm> 

using namespace std;

//map容器的查找和统计
/*
    - `find(key);` //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    - `count(key);` //统计key的元素个数
*/


void test01()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    //查找
    //find()返回的结果是迭代器
    map<int,int>::iterator pos =m.find(3);
    //判断是否查找到了
    if (pos != m.end())
    {
        cout << "查到了元素 key = " << (*pos).second << endl;
    }
    else
    {
        cout << "未找到该元素" << endl;
    }

    //统计
    //map的count值智能为0 or 1
    int num = m.count(3);
    cout << "num = " << num <<endl;

    //multimap 可以不为0 or 1
    multimap<int,int>m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(3,20));
    m1.insert(pair<int,int>(3,30));
    int num1 = m1.count(3);
    cout << "num = " << num1 <<endl;
    
}

int main()
{
    test01();
    return 0;
}