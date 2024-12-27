#include <iostream>
#include <set>

using namespace std;

//set容器的大小和交换
/*
    - `size();` //返回容器中元素的数目
    - `empty();` //判断容器是否为空
    - `swap(st);` //交换两个集合容器
*/

//打印输出集合元素
void printSet(const set<int> &s)
{
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//集合的大小
void test01()
{
    set<int> s1;

    //插入数据 只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //遍历
    printSet(s1);
    //判断是否为空
    if (s1.empty())
    {
        cout << "s1为空" << endl;
    }
    else
    {
        cout << "s1非空" << endl;
        cout << "s1的大小为：" << s1.size() << endl;
    }    
}

//集合的交换操作
void test02()
{
    set<int> s1;

    //插入数据 只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int> s2;
    //插入数据 只有insert方式
    s2.insert(100);
    s2.insert(200);
    s2.insert(300);
    s2.insert(400);
    
    cout << "交换前s1：" << endl;
    printSet(s1);
    cout << "交换前s2：" << endl;
    printSet(s2);

    cout << "------------------" << endl;
    s1.swap(s2);
    cout << "交换后s1：" << endl;
    printSet(s1);
    cout << "交换后s2：" << endl;
    printSet(s2);

}

int main()
{
    test01();
    test02();
    return 0;
}