#include <iostream>
#include <set>
#include <string>
using namespace std;

//set容器排序
//set容器默认从小到大，利用仿函数，改变排序规则
//set存放自定义数据类型

class Person
{
public:
    Person(string name,int age);
    string m_Name;
    int m_age;
};

Person::Person(string name,int age)
{
    this->m_Name = name;
    this->m_age = age;
}

// void printPersonSet(const set<Person> &s)
// {
//     for (set<Person>::const_iterator it = s.begin(); it != s.end(); it++)
//     {
//         cout << (*it).m_Name <<"的年龄是：" << (*it).m_age << endl;
//     }
// }

class myCompare1
{
public:
    bool operator()(const Person p1,Person p2) const
    {
        //根据年龄大小进行降序排列
        return p1.m_age > p2.m_age;
    }
};

void printMyPersonSet(const set<Person,myCompare1> &s)
{
    for (set<Person,myCompare1>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).m_Name << "的年龄为：" << (*it).m_age << endl;
    }    
}

class myCompare2
{
public:
    bool operator()(const Person p1,Person p2) const
    {
        //根据年龄大小进行升序排列
        return p1.m_age < p2.m_age;
    }
};

//printMyPersonSet()多态
void printMyPersonSet(const set<Person,myCompare2> &s)
{
    for (set<Person,myCompare2>::const_iterator it = s.begin(); it != s.end(); it++)
    {
        cout << (*it).m_Name << "的年龄为：" << (*it).m_age << endl;
    }    
}

void test01()
{
    // set<Person>s;
    // Person p1("刘备", 23);    
    // Person p2("关羽", 27);    
    // Person p3("张飞", 25);    
    // Person p4("赵云", 21);    
    // s.insert(p1);    
    // s.insert(p2);    
    // s.insert(p3);    
    // s.insert(p4);

    // //报错 无法构建起来set ==> 必须要写仿函数进行排序规则重置
    // printPersonSet(s);
    Person p1("刘备", 23);    
    Person p2("关羽", 27);    
    Person p3("张飞", 25);    
    Person p4("赵云", 21);
    //降序  
    cout << "降序排列：" << endl;
    set<Person,myCompare1> s1;

    s1.insert(p1);    
    s1.insert(p2);    
    s1.insert(p3);    
    s1.insert(p4);

    printMyPersonSet(s1);
    cout <<"-----------------------" << endl;
    //升序
    cout << "升序排列：" << endl;
    set<Person,myCompare2> s2;

    s2.insert(p1);    
    s2.insert(p2);    
    s2.insert(p3);    
    s2.insert(p4);

    printMyPersonSet(s2);
}

int main()
{
    test01();
    return 0;
}