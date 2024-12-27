#include <iostream>
#include <vector>
#include <string>
using namespace std;
//vector中存放自定义的数据类型

class Person
{
public:
    string m_name;
    int m_age;
    Person(string name,int age)
    {
        this->m_name = name;
        this->m_age = age;
    };
};

void test01()
{
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);

    //向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //遍历容器中的数据
    for(vector<Person>::iterator it = v.begin();it!= v.end();it++)
    {
        cout<<it->m_name<<" "<<it->m_age<<endl;
        //cout << (*it).m_name << " " << (*it).m_age << endl; 这样写也行
    }
}

//存放自定义数据类型  指针
void test02()
{
    vector<Person*> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);

    //向容器中添加数据
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //遍历容器中的数据
    for(vector<Person*>::iterator it = v.begin();it!= v.end();it++)
    {
        cout<<(*it)->m_name<<" "<<(*it)->m_age<<endl;
    }
}

int main()
{
    test01();
    test02();
    return 0;
}