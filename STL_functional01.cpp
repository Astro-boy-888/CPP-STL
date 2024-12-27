#include <functional> //STL内建仿函数必须引入这个包
#include <iostream>
#include <algorithm>

using namespace std;

//算数仿函数 => 实现四则运算
/*
- `template<class T> T plus<T>` //加法仿函数
- `template<class T> T minus<T>` //减法仿函数
- `template<class T> T multiplies<T>` //乘法仿函数
- `template<class T> T divides<T>` //除法仿函数
- `template<class T> T modulus<T>` //取模仿函数
- `template<class T> T negate<T>` //取反仿函数
*/
//这里以- `template<class T> T negate<T>` //取反仿函数 
//=>一元运算
//- `template<class T> T plus<T>` //加法仿函数
//=>二元运算为例 其余仿函数类似

//negate 一元仿函数 取反仿函数
void test01()
{
    negate<int> n;
    cout << n(50) <<endl;

}

//plus 二元仿函数 加法 T只用写一个即可 int + int
void test02()
{
    plus<int>p;
    cout << p(10,10) << endl;
}

int main()
{
    test01();
    test02();
    return 0;    
}