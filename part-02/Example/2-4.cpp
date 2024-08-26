/*
把英寸英尺换算成厘米，写个这逼玩意还高兴了了一下，太菜了
*/
#include <iostream>
using namespace std;

int main()
{
    double cm, inches, feet, totalinches;

    cout << "I help you to matrixing, Enter the feet and inches: " << endl;
    cin >> feet >> inches;

    totalinches = 12 * feet + inches;
    cm = 2.54 * totalinches;
    cout << "cm is : " << cm << "cm" << endl;

    return 0;
}