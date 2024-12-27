#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric> //算术生成算法要记得加上这个头文件
using namespace std;

//fill 向容器中填充指定的元素
/*
- `fill(iterator beg, iterator end, value);`
    
    // 向容器中填充元素
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // value 填充的值
*/
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.resize(10);

    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
    //后期重新填充
    fill(v.begin(),v.end(),100);

    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}