#include <iostream>
#include <string>
using namespace std;

//字符串之间的比较 按照ASCII码的顺序进行比较  = 返回 0 > 返回 1 < 返回 -1
// - `int compare(const string &s) const;` //与字符串s比较
// - `int compare(const char *s) const;` //与字符串s比较

void test01() {
    string s1 = "hello";
    string s2 = "world";
    string s3 = "hello";

    //比较两个字符串
    if (s1.compare(s2) < 0) {
        cout << "s1 < s2" << endl;
    } else if (s1.compare(s2) > 0) {
        cout << "s1 > s2" << endl;
    } else {
        cout << "s1 = s2" << endl;
    }
    //比较两个字符串
    if (s1.compare(s3) < 0) {
        cout << "s1 < s3" << endl;
    } else if (s1.compare(s3) > 0) {
        cout << "s1 > s3" << endl;
    } else {
        cout << "s1 = s3" << endl;
    }
}

int main() {
    test01();
    return 0;
}

