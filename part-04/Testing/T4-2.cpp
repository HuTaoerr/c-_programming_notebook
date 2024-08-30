/*
提示用户输入3个数，然后按升序输出这些数
本章只讲了bool和if，Switch，所以就用这些来完成程序，笨拙
 */
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    // cout << "请输入3个数: ";
    // cin >> num1 >> num2 >> num3;
    cout << endl;
    num1 = 9;
    num2 = 22;
    num3 = 37;

    bool bool1, bool2, bool3, bool4;
    bool1 = (num1 <= num2);
    bool2 = (num1 <= num3);
    bool3 = (num2 <= num3);
    // bool4 = (num1 < num2);

    if (bool1 && bool2)
    {
        cout << num1 << endl;
        if (bool3)
        {
            cout << num2 << endl;
            cout << num3 << endl;
        }
        else
        {
            cout << num3 << endl;
            cout << num2 << endl;
        }
    }

    // -------------------
    if (bool3 && !bool1)
    {
        cout << num2 << endl;
        if (bool2)
        {
            cout << num1 << endl;
            cout << num3 << endl;
        }
        else
        {
            cout << num3 << endl;
            cout << num1 << endl;
        }
    }
    //----------------

    if (!bool2 && !bool3)
    {
        cout << num3 << endl;
        if (bool1)
        {
            cout << num1 << endl;
            cout << num2 << endl;
        }
        else
        {
            cout << num2 << endl;
            cout << num1 << endl;
        }
    }
    return 0;
}
