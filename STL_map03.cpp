#include <iostream>
#include <map>
#include <string>
#include <algorithm> 

using namespace std;

//map容器元素的插入和删除
/*
    - `insert(elem);` //在容器中插入元素。
    - `clear();` //清除所有元素
    - `erase(pos);` //删除pos迭代器所指的元素，返回下一个元素的迭代器。
    - `erase(beg, end);` //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
    - `erase(key);` //删除容器中值为key的元素。
*/
void printMap(const map<int,int> &m)
{
    for (map<int,int>::const_iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key为"<< (*it).first << "的元素的value为" << (*it).second << endl;
    }
    cout << "------------------------------------" << endl;
}

void test01()
{
    map<int,int>m;

    //插入
    //第一种
    m.insert(pair<int,int>(1,10));

    //第二种
    m.insert(make_pair(2,20));

    //第三种
    m.insert(map<int,int>::value_type(3,30));

    //第四种
    m[4] = 40;

    //并未设置m[5]
    // cout << m[5] << endl;
    //会输出 key为5的元素的value为0 错误
    //不建议用[] 在输出的时候 已知map在这个key值处已经初始化了 用的话不影响
    printMap(m);
    cout << m[1] << endl;

    //删除
    m.erase(m.begin());
    printMap(m);

    //只会按照key值删除 不会按照value删除
    m.erase(3);
    printMap(m);
}

int main()
{
    test01();
    return 0;
}