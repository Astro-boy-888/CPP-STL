#include <iostream>
#include <list>
#include <string>
using namespace std;

//list容器 反转和排序
/*
    - `reverse();` //反转链表
    - `sort();` //链表排序
*/

void printList(const list<int> &l)
{
    for (list<int>::const_iterator it = l.begin(); it !=l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool myCompare(int v1,int v2)
{
    //降序 第一个数 > 第二个数
    return v1 > v2;
}

//反转
void test01()
{   
    list<int>L1;

    //尾插
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);
    L1.push_back(60);

    cout << "反转前：" << endl;
    printList(L1);

    L1.reverse();
    cout << "反转后：" << endl;
    printList(L1);
}

//排序
void test02()
{   
    list<int>L1;

    //尾插
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);
    L1.push_back(60);

    cout << "排序前：" << endl;
    printList(L1);

    
    L1.sort();//升序 
    cout << "升序排序后：" << endl;
    printList(L1);

    //怎么才能降序 => bool myCompare()
    L1.sort(myCompare);
    cout << "降序排序后：" << endl;
    printList(L1);

}

int main()
{
    test01();
    test02();
    return 0;
}