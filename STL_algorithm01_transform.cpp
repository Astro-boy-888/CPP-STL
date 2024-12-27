#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

//常用遍历算法 transform遍历算法
/*
- `transform(iterator beg1, iterator end1, iterator beg2, _func);`

    //beg1 源容器开始迭代器

    //end1 源容器结束迭代器

    //beg2 目标容器开始迭代器

    //_func 函数或者函数对象
*/
class Transform
{
public:
    int operator()(int v)
    {
        return v;
    }
};

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    vector<int> vTarget;//目标容器 
    //注意：这个时候目标容器没有开辟空间 直接运行会报错
    //可以直接使用resize进行空间开辟
    vTarget.resize(v.size());
    transform(v.begin(),v.end(),vTarget.begin(),Transform());
    for_each(vTarget.begin(),vTarget.end(),myPrint());    
}

int main()
{
    test01();
    return 0;
}