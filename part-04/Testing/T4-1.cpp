/*
提示用户输入1个数。然后输出此数，并说明此数是整数、负数还是0.

 */
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "请输入一个整数： ";
    cin >> num;
    cout << endl;

    if (num > 0)
    {
        cout << "是正整数" << endl;
    }
    else if (num < 0)
    {
        cout << "是负整数" << endl;
    }
    else
    {
        cout << "是0" << endl;
    }

    return 0;
}
