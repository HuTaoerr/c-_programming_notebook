/*
提示用户输入一个小数，程序将该小数四舍五入后保留2位小数
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1;
    cout << "Enter a decimal and you will get a decimal with a precision of 2:  " << flush;
    cout << fixed << showpoint << setprecision(2);
    cin >> num1;

    cout << num1 << endl;

    return 0;
}
