#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//replace_if 将区间内满足条件的元素 替换成指定元素=
/*
- `replace_if(iterator beg, iterator end, _pred, newvalue);`
    
    // 按条件替换元素，满足条件的替换成指定元素
    
    // beg 开始迭代器
    
    // end 结束迭代器
    
    // _pred 谓词
    
    // newvalue 替换的新元素
*/
class Greater30
{
public:
    bool operator()(int val)
    {
        return val >= 30;
    }
};

class MyPrint
{
public:
    void operator ()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(30);

    cout << "替换前：" << endl;
    for_each(v.begin(),v.end(),MyPrint());
    cout << endl;

    cout << "替换后：" << endl;
    //将大于等于 30 的元素 替换成3000
    replace_if(v.begin(),v.end(),Greater30(),3000);
    for_each(v.begin(),v.end(),MyPrint());
    cout << endl;
}

int main()
{
    test01();
    return 0;
}