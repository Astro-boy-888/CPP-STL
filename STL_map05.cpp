#include <iostream>
#include <map>
#include <string>
#include <algorithm> 

using namespace std;

//map容器的排序
/*
    默认按照key值进行从小到大排序 可以利用仿函数改变排序规则
*/

void printMap(const map<int,int> &m)
{
    for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "------------------------------------" << endl;
}

class myCompare
{
public:
    bool operator()(const int v1, int v2) const
    {
        //降序
        return v1 > v2;
    }
};

void test01()
{
    map<int,int>m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));
    
    for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "------------------------------------" << endl;

    map<int,int,myCompare> m1;
    m1.insert(make_pair(1,10));
    m1.insert(make_pair(2,20));
    m1.insert(make_pair(3,30));
    m1.insert(make_pair(4,40));
    m1.insert(make_pair(5,50));
    
    //仿函数修改容器排序
    for (map<int,int,myCompare>::const_iterator it = m1.begin(); it != m1.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "------------------------------------" << endl;
}

int main()
{
    test01();
    return 0;
}