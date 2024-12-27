#include <iostream>
#include <vector>
using namespace std;

//vector 预留空间
/*
    reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。
*/

void test01()
{
    vector<int> v;
    int num = 0; //统计开辟内存（重新分配内存 => 头指针发生变化）的次数
    int *p = NULL; // 始终指向容器第一个元素
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            p = &v[0];
            num ++;
        }
    }
    cout << "未事先开辟内存num = " << num <<endl; //num = 18
    //总共重新分配了18次内存空间 => 那为啥不一开始就分配100000个坑给我呢 然后再一个一个填数
    //使用reserve()
}

void test02()
{
    vector<int> v;
    int num = 0; //统计开辟内存（重新分配内存 => 头指针发生变化）的次数
    int *p = NULL; // 始终指向容器第一个元素
    v.reserve(100000);//直接一次性全给v开辟完
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if(p != &v[0])
        {
            p = &v[0];
            num ++;
        }
    }
    cout << "事先开辟内存之后num = " << num <<endl; //num = 1
}
int main() 
{
    test01();
    test02();
    return 0;
}