/*
不想笨拙的直接cout，方法肯定很多，但是现在写的这个也很笨拙
本来想是不可以通过定位一个点又遍历啥的

Write a program that produces the following output:
CCCCCCCCC        ++              ++
CC               ++              ++
CC         ++++++++++++++ +++++++++++++++
CC         ++++++++++++++ +++++++++++++++
CC               ++              ++
CCCCCCCCC        ++              ++

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "CCCCCCCCC        ++              ++";
    string b = "CC               ++              ++";
    string c = "CC         ++++++++++++++ +++++++++++++++";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << c << endl;
    cout << b << endl;
    cout << a << endl;
    return 0;
}