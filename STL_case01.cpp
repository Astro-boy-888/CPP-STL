#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
using namespace std;

/*
    案例-评委打分
    ### 案例描述
    有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
    ### 实现步骤
    1. 创建五名选手，放到vector中
    2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
    3. sort算法对deque容器中分数排序，去除最高和最低分
    4. deque容器遍历一遍，累加总分
    5. 获取平均分
*/

class Person
{
public:
    Person(string name ,int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }
    string m_Name;
    int m_Score;
};
void creat_Person(vector<Person> &v)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        string name = "选手";
        name += nameSeed[i];
        int score = 0;
        Person p(name,score);
        v.push_back(p);
    }
}

void print_Score(const vector<Person> &v)
{
    for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << (*it).m_Name << " 的成绩为：" << (*it).m_Score <<endl;
    }
}

void print_Get(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void setScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand()%41 +60; //60~100
            d.push_back(score);
        }
        cout << (*it).m_Name << "的所有得分为：" ;
        print_Get(d);
        sort(d.begin(),d.end());
        d.pop_front();
        d.pop_back();
        cout << (*it).m_Name <<"所有得分排序后为：";
        print_Get(d);
        int total = 0;
        for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
        {
            total += *it;
        }
        (*it).m_Score = total / d.size();
    }
}

int main()
{
    //创建5名选手ABCDEF
    vector<Person> v;
    creat_Person(v);
    //给五名选手打分
    setScore(v);
    //显示最后得分
    print_Score(v);
    return 0;
}

