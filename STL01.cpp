#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void MyPrint(int i)
{
    cout << i << " ";
}

void test01()
{   
    //vector容器存放内置数据类型
    //创建一个vector容器
    vector<int> v;

    //向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // //通过迭代器访问容器中的元素数据
    // //起始迭代器：指向容器中的第一个元素
    // vector<int>::iterator itBegin = v.begin(); 
    // //结束迭代器：指向容器中的最后一个元素的下一个位置
    // vector<int>::iterator itEnd = v.end();

    // //第一种遍历方式
    // while (itBegin != itEnd)
    // {
    //     cout << *itBegin << " "<< endl;
    //     itBegin++;
    // }

    // //第二种遍历方式
    // for (vector<int>::iterator it = v.begin(); it != v.end();  it ++)
    // {
    //     cout << *it << " "<< endl;
    // }
    
    //第三种遍历方式
    //     for_each(_InputIterator __first, _InputIterator __last, _Function __f)
    // {
    //   // concept requirements
    //   __glibcxx_function_requires(_InputIteratorConcept<_InputIterator>)
    //   __glibcxx_requires_valid_range(__first, __last);
    //   for (; __first != __last; ++__first)
	// __f(*__first);
    //   return __f; // N.B. [alg.foreach] says std::move(f) but it's redundant.
    // }
    for_each(v.begin(),v.end(),MyPrint);
    
}

int main() 
{
    test01();
    return 0;
}