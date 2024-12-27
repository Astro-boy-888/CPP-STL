#include <functional> //STL内建函数对象(仿函数)必须引入这个包
#include <iostream>
#include <algorithm>

using namespace std;

//关系仿函数 => 实现关系对比
/*
- `template<class T> bool equal_to<T>` //等于
- `template<class T> bool not_equal_to<T>` //不等于
- `template<class T> bool greater<T>` //大于
- `template<class T> bool greater_equal<T>` //大于等于
- `template<class T> bool less<T>` //小于
- `template<class T> bool less_equal<T>` //小于等于
*/
//这里以- `template<class T> bool greater<T>` 
//大于为例 其余仿函数类似

//negate 一元仿函数 取反仿函数
void test01()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    //降序 利用内建仿函数greater<T>()
    sort(v.begin(),v.end(),greater<int>());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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