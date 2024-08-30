/*
求一个整数的绝对值
输出：
Enter an integer: -8786
The absolute value of -8786 is 8786
 */
#include <iostream>
using namespace std;

int main()
{
    int number, temp;
    cout << "Enter an integer: " << flush;
    cin >> number;

    temp = number;

    if (number < 0)
    {
        number = -number;
    }

    cout << "The absolute value of " << temp << " is " << number << endl;

    return 0;
}
