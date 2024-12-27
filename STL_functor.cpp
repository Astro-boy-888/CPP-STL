#include <iostream>
using namespace std;

//函数对象 => 仿函数
/*
    - 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
    - 函数对象超出普通函数的概念，函数对象可以有自己的状态
    - 函数对象可以作为参数传递
*/


//1、函数对象（仿函数）在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }
};

void test01()
{
    MyAdd myAdd;
    cout << myAdd(10,10) << endl;
}

//2、函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
    MyPrint()
    {
        count = 0;
    }
    void operator()(string test)
    {
        cout << test <<endl;
        count ++;
    }
    int count;
};

void test02()
{
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");
    myPrint("hello world");

    cout << "myPrint被调用的次数:" << myPrint.count << endl;
}

//3、函数对象可以作为参数传递

void doPrint(MyPrint &mp,string test)
{
    mp(test);//利用函数对象对第二个参数进行输出
}

void test03()
{
    MyPrint myPrint;
    doPrint(myPrint,"Hello C++");
}

int  main()
{
    test01();
    test02();
    test03();
    return 0;
}

