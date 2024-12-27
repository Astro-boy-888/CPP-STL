#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
using namespace std;

//sort 排序算法
/*
- `sort(iterator beg, iterator end, _Pred);`
    
    // 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // _Pred 谓词 默认从小到大
*/
void myPrint(int val)
{
    cout << val <<" " ;
}
class mySort
{
public:
    bool operator ()(const int  val1,int val2)
    {
        return val1 > val2;
    }
};
void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

    //改变为降序
    // sort(v.begin(),v.end(),mySort());
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

//
int main()
{
    test01();
    return 0;
}