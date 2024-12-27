#include <iostream>
#include <set>

using namespace std;

//set和multiset的区别
/*
    - set不可以插入重复数据，而multiset可以
    - set插入数据的同时会返回插入结果，表示插入是否成功
    - multiset不会检测数据，因此可以插入重复数据
*/

//集合的插入和删除
void test01()
{
    set<int> s;

    //set插入数据 只有insert方式 返回的是pair类型 pair<set<int>::iterator ,bool>
    pair<set<int>::iterator ,bool> ret = s.insert(10);

    if (ret.second)
    {
        cout << "第一次插入成功" << endl;
    }
    else
    {
        cout << "第一次插入失败" << endl;
    }

    //再次插入
    ret = s.insert(10);

    if (ret.second)
    {
        cout << "第二次插入成功" << endl;
    }
    else
    {
        cout << "第二次插入失败" << endl;
    }

    multiset<int> ms;

    //multiset插入数据 只有insert方式 不会返回pair类型
    ms.insert(10);
    ms.insert(10);

    for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it  << " " ;
    }
    cout << endl;
}

int main()
{
    test01();
    return 0;
}