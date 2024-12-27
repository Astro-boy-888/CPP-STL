#include <iostream>
#include <set>

using namespace std;

//set容器排序
//set容器默认从小到大，利用仿函数，改变排序规则
//set存放内置数据类型
void printSet(const set<int> &s) 
{
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

//重载排序规则仿函数 ==> 名称叫仿函数
// 仿函数(functor)，就是使一个类的使用看上去像一个函数。
// 其实现就是类中实现一个operator()，这个类就有了类似函数的行为，就是一个仿函数类了。

class MyCompare
{
public:
    bool operator()(const int v1,int v2) const//重载()符号
    {
        //降序排列 v1 > v2
        return v1 > v2;
    }
};

//重置排序规则后的set容器 ==> 迭代器也会发生变化
void printMySet(const set<int,MyCompare> &s)
{
    for (set<int,MyCompare>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s1;

    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(50);
    s1.insert(60);

    //默认排序从小到大升序
    printSet(s1);

    //仿函数修改排序规则 改为降序 从大到小
    //必须在插入数据之前就要告诉编译器 修改排序规则 => 仿函数
    /*
    class std::set<int>
    A standard container made up of unique keys, which can be retrieved in logarithmic time.

    模板参数:
    _Key – Type of key objects.
    _Compare – Comparison function object type, defaults to less<_Key>.
    _Alloc – Allocator type, defaults to allocator<_Key>.
    */

    set<int,MyCompare> s2;

    s2.insert(10);
    s2.insert(40);
    s2.insert(30);
    s2.insert(20);
    s2.insert(50);
    s2.insert(60);

    printMySet(s2);

}

int main()
{
    test01();
    return 0;
}