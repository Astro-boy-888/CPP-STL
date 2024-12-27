#include <iostream>
#include <set>

using namespace std;

//对set容器查找和统计数据
/*
    - `find(key);` //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    - `count(key);` //统计key的元素个数
*/

//集合的查找
void test01()
{
    set<int> s1;

    //插入数据 只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30);
    
    if (pos != s1.end())
    {
        cout << "找到元素：" << *pos <<endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}

//set容器的统计
void test02()
{   
    set<int> s1;

    //插入数据 只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //统计30的个数
    int num = s1.count(30);
    //对于set而言，count()的结果要么是0要么是1 
    //对于multiset会返回元素重复次数
    cout << "num = " << num << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}