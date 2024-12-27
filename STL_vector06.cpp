#include <iostream>
#include <vector>
using namespace std;

//vector 容器互换
/*
swap(vec); // 将vec与本身的元素互换
*/

const void printVector(const vector<int> &v)
{
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it  << "";
    }
    cout <<endl;
} 

//简单测试
void test01()
{
    cout << "交换前" << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);
    
    cout << "交换后" << endl;
    swap(v1, v2); // 交换v1与v2的元素
    printVector(v1);
    printVector(v2);
}

//实际用途: 巧用swap可以收缩内存空间
void test02()
{
    vector<int> v;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
    }
    cout << "v 的容量是：" << v.capacity() << endl; // 输出v的容量
    cout << "v 的大小是：" << v.size() << endl; //输出v的大小

    //此时占了130000多个坑
    v.resize(3);
    //重新指定大小
    cout << "v 的容量是：" << v.capacity() << endl; // 输出v的容量
    cout << "v 的大小是：" << v.size() << endl; //输出v的大小
    //结果还是占了130000多个坑 占着坑不拉屎
    
    //巧用swap收缩内存 ==> 容量和大小都变成3 
    //vector<int>(v) 创建一个和v相同的匿名对象 
    //swap(v) 容器交换 ==> v和匿名对象进行交换
    //当前行执行完之后 编译器发现他是匿名对象会马上释放匿名对象的内存
    vector<int>(v).swap(v); 
    cout << "v 的容量是：" << v.capacity() << endl; // 输出v的容量
    cout << "v 的大小是：" << v.size() << endl; //输出v的大小
}

int main() 
{
    test01();
    test02();
    return 0;
}
