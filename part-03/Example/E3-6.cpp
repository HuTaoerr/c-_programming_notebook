/*
输入输出string类型
getline(输入流变量， string变量)

 */
#include <iostream>
using namespace std;

int main()
{
    string mystring;
    cout << "Enter some string: " << endl;
    getline(cin, mystring);

    cout << mystring << endl;
    return 0;
}
