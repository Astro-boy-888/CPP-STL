#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//set_intersection 求两个容器的交集 会返回最后一个交集元素的后一个元素位置
/*
- `set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);`
    
    // 求两个集合的交集
    
    // **注意:两个集合必须是有序序列**
    
    // beg1 容器1开始迭代器
    // end1 容器1结束迭代器
    // beg2 容器2开始迭代器
    // end2 容器2结束迭代器
    // dest 目标容器开始迭代器
*/
void myPrint(int val)
{
    cout << val <<" ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }

    for_each(v1.begin(),v1.end(),myPrint);
    cout << endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;

    //目标容器需要提前开辟空间
    vector<int> vTarget;
    vTarget.resize(min(v1.size(),v2.size()));
    
    //获取交集 注意返回的是目标容器结束位置的迭代器 
    vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl ;
}

int main()
{
    test01();
    return 0;
}