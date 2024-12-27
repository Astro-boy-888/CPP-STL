#include <iostream>
#include <list>
#include <string>
using namespace std;

//list容器的赋值和交换
/*
    - `assign(beg, end);` //将[beg, end)区间中的数据拷贝赋值给本身。
    - `assign(n, elem);` //将n个elem拷贝赋值给本身。
    - `list& operator=(const list &lst);` //重载等号操作符
    - `swap(lst);` //将lst与本身的元素互换。

*/
void printList(const list<int> &l)
{
    for (list<int>::const_iterator it =l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int>L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    printList(L1);

    //赋值操作
    //=运算符重载
    list<int> L2;
    L2 = L1;

    //assing()函数
    list<int> L3;
    L3.assign(L1.begin(),L1.end());
    printList(L3);

    list<int> L4;
    L4.assign(10,100);
    printList(L4);
}
void test02()
{
    list<int>L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    list<int>L2;
    L2.assign(10,100);

    cout << "交换前L1：" << endl;
    printList(L1);
    
    cout << "交换前L2：" << endl;
    printList(L2);   

    L1.swap(L2);
    cout << "交换后L1：" << endl;
    printList(L1);
    
    cout << "交换后L2：" << endl;
    printList(L2);   

}

int main()
{
    test01();
    test02();
    return 0;
}