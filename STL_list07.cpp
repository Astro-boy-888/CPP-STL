#include <iostream>
#include <list>
#include <string>
using namespace std;

//list容器 排序案例 对于自定义的数据类型 
/*
    案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高

    排序规则：**按照年龄进行升序，如果年龄相同按照身高进行降序**
*/

class Person
{
public:
    Person(string name,int age,int height);
    string m_Name;
    int m_Age;
    int m_Height;
};

Person::Person(string name,int age,int height)
{
    this->m_Name = name;
    this->m_Age = age;
    this->m_Height = height;
}

void printPerson(const list<Person> &l)
{
    for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
    {
        cout << (*it).m_Name << "的年纪是：" << (*it).m_Age << "岁 ";
        cout << "身高是：" << (*it).m_Height << "cm" <<endl;
    }
    cout << endl;
}

// 重新指定排序规则
bool  myCompare(Person &p1,Person &p2)
{   
    //年龄相同，按身高做降序
    if (p1.m_Age == p2.m_Age)
    {
        return p1.m_Height > p2.m_Height;
    }
    //年龄不同，按年龄做升序
    return p1.m_Age < p2.m_Age;
}

void test01()
{
    list<Person> L;
    
    //准备数据
    Person p1("刘备", 35 , 175);
    Person p2("曹操", 45 , 180);    
    Person p3("孙权", 40 , 170);    
    Person p4("赵云", 25 , 190);    
    Person p5("张飞", 35 , 160);    
    Person p6("关羽", 35 , 200);

    //插入数据
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    cout << "排序前的顺序" << endl;
    printPerson(L);
    cout << "--------------------------" << endl;
    cout << "排序后的顺序" << endl;
    L.sort(myCompare);
    printPerson(L);
}
int main()
{
    test01();
    return 0;
}
