#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//set_union 求两个集合的并集
/*
- `set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);`
    
    // 求两个集合的并集
    
    // **注意:两个集合必须是有序序列**
    
    // beg1 容器1开始迭代器
    // end1 容器1结束迭代器
    // beg2 容器2开始迭代器
    // end2 容器2结束迭代器
    // dest 目标容器开始迭代器
*/
void myPrint(int val)
{
    cout << val << " ";
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
    
    //注意重新分配vTarget的容量
    vector<int> vTarget;
    vTarget.resize(v1.size()+v2.size());
    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}