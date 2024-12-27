#include <iostream>
#include <deque>
#include <algorithm> //标准算法头文件

using namespace std;


// deque 数据存取操作
/*
    sort(iterator beg, iterator end) //对beg和end区间内元素进行排序
*/

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{   
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);

    //默认排序规则：从小到大 升序
    //对于支持随机访问的迭代器的容器都是可以利用sort算法直接对齐进行排序
    //vetor容器也乐意使用 sort()进行排序
    sort(d.begin(),d.end());
    cout << "排序后:" << endl;
    printDeque(d);
}

int main()
{
    test01();
    return 0;
}