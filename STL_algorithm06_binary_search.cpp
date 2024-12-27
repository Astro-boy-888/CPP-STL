#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//binary_search 函数查找指定元素是否存在 二分查找
/*
- `bool binary_search(iterator beg, iterator end, value);`
    
    // 查找指定的元素，查到 返回true 否则false
    
    // 注意: 在**无序序列中不可用**
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // value 查找的元素
*/

void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //查找容器是否有9元素
    //注意：容器必须是有序的序列
    //v.push_back(2);
    bool ret = binary_search(v.begin(),v.end(),9);
    if (ret)
    {
        cout << "找到了元素" << endl; 
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}

int main()
{
    test01();
    return 0;
}