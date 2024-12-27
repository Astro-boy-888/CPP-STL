#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>

using namespace std;

//random_shuffle洗牌 指定范围内的元素随机调整次序
/*
- `random_shuffle(iterator beg, iterator end);`
    
    // 指定范围内的元素随机调整次序
    
    // beg 开始迭代器
    
    // end 结束迭代器
*/
void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{   
    //根据时间调整随机种子
    srand((unsigned int)time(NULL));
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    //利用洗牌算法 打乱顺序
    random_shuffle(v.begin(),v.end());

    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}