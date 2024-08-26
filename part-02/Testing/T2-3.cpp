/*

编写一个程序，提示用户输入一个小数，然后输出与该数最接近的整数

 */

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) // 进行5次测试
    {
        double num;
        cout << "Please enter a decimals , we outputs the nearest integer to the number: ";
        cin >> num;

        // 得实现类似四舍五入，还得有负数和零
        int a;
        int b;
        if (num > 0)
        {
            a = static_cast<int>(num);
            b = a + 1;

            if ((b - num) > 0.5)
            {
                cout << "is : " << a << endl;
            }
            else if ((b - num) < 0.5)
            {
                cout << "is : " << b << endl;
            }
            else
            {
                cout << "have two answer : " << a << " and " << b << endl;
            }
        }
        else if (num < 0)
        {
            a = static_cast<int>(num);
            b = a - 1;

            if ((b - num) > -0.5)
            {
                cout << "is : " << b << endl;
            }
            else if ((b - num) < -0.5)
            {
                cout << "is : " << a << endl;
            }
            else
            {
                cout << "have two answer : " << a << " and " << b << endl;
            }
        }
        else
        {
            cout << "0 is itself : " << num << endl;
        }
    }
    return 0;
}
