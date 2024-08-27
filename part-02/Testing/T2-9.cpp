/*
编写一个c++程序，提示用户输入秒，然后程序会转换成时分秒展示出来
 */

#include <iostream>
using namespace std;

const int x = 60;
const int y = 3600;

int main()
{
    int seconds, minutes, hours;
    cout << "Enter a int number as the seconds :" << endl;
    cin >> seconds;
    
    // seconds = 9630;
    hours = seconds / y;
    minutes = (seconds % y) / x;

    cout << hours << ":" << minutes << ":" << (seconds % y) % x << endl;

    return 0;
}