#include <iostream>
#include <map>
#include <vector>
#include <string>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
using namespace std;

/*

### 案例-员工分组

### 案例描述

- 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
- 员工信息有: 姓名 工资组成；部门分为：策划、美术、研发
- 随机给10名员工分配部门和工资
- 通过multimap进行信息的插入 key(部门编号) value(员工)
- 分部门显示员工信息

### 实现步骤

1. 创建10名员工，放到vector中
2. 遍历vector容器，取出每个员工，进行随机分组
3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
4. 分部门显示员工信息

*/

class Worker
{
    public:
        string m_Name;
        int m_Salary;
};

// 创建员工 放到Vetor中
void createWorker(vector<Worker> &v)
{
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        Worker w;
        w.m_Name = "员工";
        w.m_Name += nameSeed[i];

        w.m_Salary = rand()%10000 + 10000; //10000~19999
        //将员工w放入到容器vector中
        v.push_back(w);
    }
}

// 遍历Vetor容器 取出每位员工 进行分组
void setGroup(vector<Worker> &v,multimap<int,Worker> &m)
{
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
    {
        //产生随机部门编号 0 1 2
        int deptID = rand() % 3 ;
        
        //将员工插入到分组中
        //key 部门编号 value 具体员工
        m.insert(make_pair(deptID,*it));
    }
}

//分组显示员工
void showWorker(const multimap<int,Worker> &m)
{
    cout << "策划部门的员工有：" << endl;
    multimap<int,Worker>::const_iterator it =  m.find(CEHUA);
    int count = m.count(CEHUA);
    for (int i = 0; i < count; i++)
    {
        cout << (*it).second.m_Name << " 薪水为："<< (*it).second.m_Salary <<endl;
        it ++; 
    }
    cout << "-------------------------" << endl;
    cout << "美术部门的员工有：" << endl;
    it =  m.find(MEISHU);
    count = m.count(MEISHU);
    for (int i = 0; i < count; i++)
    {
        cout << (*it).second.m_Name << " 薪水为："<< (*it).second.m_Salary <<endl;
        it ++; 
    }
        cout << "-------------------------" << endl;
    cout << "研发部门的员工有：" << endl;
    it =  m.find(YANFA);
    count = m.count(YANFA);
    for (int i = 0; i < count; i++)
    {
        cout << (*it).second.m_Name << " 薪水为："<< (*it).second.m_Salary <<endl;
        it ++; 
    }    
}

int main()
{   
    //1、创建员工
    vector<Worker> v;
    createWorker(v);

    //2、员工分组
    multimap<int,Worker> m;
    setGroup(v,m);

    //3、分部门显示员工信息
    showWorker(m);
    return 0;
}