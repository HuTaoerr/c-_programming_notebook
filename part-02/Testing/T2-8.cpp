/*
编写一个程序，提示用户输入一个4位数的正整数。该程序随后将以每行一个数字输出该数字，例如3245
3
2
4
5
 */

#include <iostream>
using namespace std;

int main()
{
    int num, a1, a2, a3;
    // cout << "Enter a 4-digit positive integer: " << endl;
    // cin >> num;
    num = 3245;
    cout << num / 1000 << endl;
    a1 = num % 1000;
    // 245

    cout << a1 / 100 << endl;
    a2 = a1 % 100;
    // 45

    cout << a2 / 10 << endl;
    a3 = a2 % 10;
    // 5

    cout << a3 << endl;

    return 0;
}