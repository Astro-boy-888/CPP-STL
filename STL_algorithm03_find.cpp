#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//find查找算法 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
/*
- `find(iterator beg, iterator end, value);`
    
    // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // value 查找的元素
*/

//查找 内置数据类型
void test01()
{
    vector<int>v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    vector<int>::iterator it = find(v.begin(),v.end(),5);
    //查找 容器中是否有 5 这个元素
    if (it == v.end())
    {
        cout << "没有找到！" << endl; 
    }
    else
    {
        cout << "找到： " << *it << endl;
    }
}

class Person
{
public:
    Person(string name ,int age)
    {
        this ->m_Age = age;
        this ->m_Name = name;
    }
    string m_Name;
    int m_Age;

    //重载==号 让底层的find 知道如何对比person数据类型
    bool operator==(const Person & p)
    {
        if (p.m_Age == this->m_Age && p.m_Name == this->m_Name)
        {
            return true;
        }
        else 
            return false;
    }
};


//查找 自定义数据类型
void test02()
{
    vector<Person> v;
    //创建数据
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);

    //放入容器中
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    //查找p2是否存在
    //注意必需要重载==运算符 原函数模板的==无法用于自定义数据的相等判断
    vector<Person>::iterator it = find(v.begin(),v.end(),p2);
    if (it == v.end())
    {
        cout << "未找到该元素" << endl;
    }
    else 
        cout << "找到元素：" << it->m_Name << "年龄为：" << it->m_Age << endl; 
}

int main()
{
    test01();
    test02();
    return 0;
}