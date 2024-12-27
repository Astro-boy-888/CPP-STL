#include <iostream>
#include <vector>
using namespace std;

//vector容器的容量和大小
/*
- `empty();` //判断容器是否为空
- `capacity();` //容器的容量
- `size();` //返回容器中元素的个数
- `resize(int num);` 
//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
 //如果容器变短，则末尾超出容器长度的元素被删除。
- `resize(int num, elem);` 
//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//如果容器变短，则末尾超出容器长度的元素被删除
*/

const void printVector(const vector<int> &v) 
{
    for (vector<int>::const_iterator it = v.begin();  it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;//默认构造函数 无参构造

    for (int i = 0; i < 10 ; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //判断容器是否为空
    if (v1.empty())
    {
        cout << "v1 is empty" << endl;
    }
    else
    {
        cout << "v1 is not empty" << endl;
        cout << "v1 的容量是： " << v1.capacity() << endl;
        cout << "v1 的大小是： " << v1.size() << endl;
    }
    //重新指定大小
    v1.resize(15);
    printVector(v1);
    //如果重新指定大小比原来长了，则默认通过0进行填充
    v1.resize(20,100);
    printVector(v1);
    //如果重新指定大小比原来长了，如果想填充其他值，可以用第二个参数指定
    v1.resize(5);
    printVector(v1);
    //如果重新指定大小比原来短了，则末尾超出容器长度的元素被删除
}

int main() 
{
    test01();
    return 0;
}