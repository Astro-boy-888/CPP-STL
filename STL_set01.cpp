#include <iostream>
#include <set>

using namespace std;

//set容器的构造和赋值
/*
构造：

- `set<T> st;` //默认构造函数：
- `set(const set &st);` //拷贝构造函数

赋值：

- `set& operator=(const set &st);` //重载等号操作符
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

//集合构造和赋值
void test01()
{
    set<int> s1;

    //插入数据 只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(50);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //遍历
    printSet(s1);
    //输出：10 20 30 40 50
    //set容器特点：自动排序 不允许重复

    //拷贝构造
    set<int>s2(s1);
    printSet(s2);

    //赋值构造
    set<int>s3;
    s3 = s1;
    printSet(s3);
}

int main()
{
    test01();
    return 0;
}