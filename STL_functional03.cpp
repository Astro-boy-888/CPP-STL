#include <functional> //STL内建仿函数必须引入这个包
#include <iostream>
#include <algorithm>

using namespace std;

//逻辑仿函数 => 实现逻辑运算
/*
- `template<class T> bool logical_and<T>` //逻辑与
- `template<class T> bool logical_or<T>` //逻辑或
- `template<class T> bool logical_not<T>` //逻辑非
*/
//这里以- `template<class T> bool logical_not<T>` //逻辑非为例 其余仿函数类似

//logical_not<T> 逻辑非仿函数
void test01()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout <<  endl;

    //利用逻辑非 将容器v 搬运到容器v2中 并执行取反操作
    vector<bool> v2;
    v2.resize(v.size());
    //transform 将v容器中内容搬运到v2中去 并执行逻辑非运算
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout <<  endl;
}

int main()
{
    test01();
    return 0;    
}