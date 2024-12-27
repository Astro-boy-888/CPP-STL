#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//find_if 按条件查找元素
/*
- `find_if(iterator beg, iterator end, _Pred);`
    
    // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // _Pred 函数或者谓词（返回bool类型的仿函数）
*/

//查找内置数据类型
class GreaterFive
{
public:
    bool operator()(int val1)
    {
        return val1 > 5;
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if (it == v.end())
    {
        cout << "未找到满足条件的元素" << endl;
    }
    else 
    {
        cout << "找到满足条件的元素: " << *it << endl;
    }
}

//查找自定义数据类型
class Person
{
public:
    string m_Name;
    int m_Age;
    Person(string name,int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
};

class Greater20
{
public:
    bool operator()(Person p)
    {
        return p.m_Age > 20;
    }
};

void test02()
{
    vector<Person> v;

    //创建数据
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find_if(v.begin(),v.end(),Greater20());
    if (it == v.end())
    {
        cout << "未找到符合条件的人" << endl;
    }
    else 
    {
        cout << "找到符合条件的人：" << it->m_Name << "年龄为：" << it -> m_Age <<endl;
    }

}
int main()
{
    test01();
    test02();
    return 0;
}