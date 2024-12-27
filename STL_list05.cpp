#include <iostream>
#include <list>
#include <string>
using namespace std;
//list容器 数据存取
/*
    - `front();` //返回第一个元素。
    - `back();` //返回最后一个元素。
*/
void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it !=l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
void test01()
{   
    list<int>L1;

    //尾插
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    // 不支持随机存储
    // cout << L1[1];
    // cout << L1.at(1);

    cout << "第一个元素为：" << L1.front() << endl;
    cout << "最后一个元素为：" << L1.back() << endl;

    //验证迭代器是不支持随机访问的
    list<int>::iterator it = L1.begin();
    it ++; //OK
    it --; //OK 支持双向
    // it = it + 1; //ERROR 不允许加数
    // it = it + 2; //ERROR 不允许加数
}

int main()
{
    test01();
    return 0;
}