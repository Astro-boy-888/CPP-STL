#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric> //算术生成算法要记得加上这个头文件
using namespace std;

//accumlate 计算区间内 容器元素累计总和
/*
- `accumulate(iterator beg, iterator end, value);`
    
    // 计算容器元素累计总和
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // value 起始值
*/

void test01()
{
    vector<int> v;
    for (int i = 0; i <= 100; i++)
    {
        v.push_back(i);
    }

    int total = accumulate(v.begin(),v.end(),0);

    cout << "total = " << total << endl;
}

int main()
{
    test01();
    return 0;
}