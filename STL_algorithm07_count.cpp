#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//count 函数 统计元素个数
/*
- `count(iterator beg, iterator end, value);`
    
    // 统计元素出现次数
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // value 统计的元素
*/

//统计内置数据类型
void test01()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);

    int num = count(v.begin(),v.end(),40);

    cout << "值为40的元素个数为：" << num <<endl;
}

class Person
{
public:
    Person(string name,int age)
    {
        this ->m_Age = age;
        this ->m_Name = name;
    }
    string m_Name;
    int m_Age;
    bool operator== (const Person&p)
    {
        if (this->m_Age == p.m_Age)
        {
            return true;
        }
        else
            return false;
    }
};
//统计自定义数据类型
void test02()
{
    vector<Person> v;

    Person p1("刘备", 35);    
    Person p2("关羽", 35);    
    Person p3("张飞", 35);    
    Person p4("赵云", 30);    
    Person p5("曹操", 25);    
    v.push_back(p1);    
    v.push_back(p2);    
    v.push_back(p3);    
    v.push_back(p4);    
    v.push_back(p5);    
    Person p("诸葛亮",35);

    int num = count(v.begin(),v.end(),p);

    cout << "和诸葛亮同岁的人有" << num << "个"  << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}