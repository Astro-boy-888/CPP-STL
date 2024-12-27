#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//仿函数 返回值为bool类型 称为谓词
//一元谓词
class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //查找容器中 有没有大于5的数字
    //GreaterFive() 匿名函数对象
    //find_of 返回迭代器 如果不存在大于5的数字则会返回 v.end()
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if (it == v.end())
    {
        cout << "未找到大于五的数字" << endl;
    }
    else 
    {
        cout << "找到了大于五的数字：" << *it << endl;  
    }
}

int main()
{   
    test01();
    return 0;
}