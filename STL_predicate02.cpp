#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//仿函数 返回值为bool类型 称为谓词
//二元谓词 传入的参数为两个参数
class MyCompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    cout << "升序排列：" << endl;
    sort(v.begin(),v.end());
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //使用函数对象 改变算法策略 变为排序规则从大到小
    sort(v.begin(),v.end(),MyCompare());
    cout << "降序排列：" << endl;
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{   
    test01();
    return 0;
}