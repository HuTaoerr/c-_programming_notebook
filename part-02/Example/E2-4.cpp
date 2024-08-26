/*
把英寸英尺换算成厘米，写个这逼玩意还高兴了了一下，太菜了
*/
#include <iostream>
using namespace std;

const double conversion = 2.45;
const int inchesPerFoot = 12;

int main()
{
    double cm, inches, feet, totalinches;

    cout << "I help you to matrixing, Enter the feet and inches: " << endl;
    cin >> feet >> inches;

    totalinches = inchesPerFoot * feet + inches;
    cm = conversion * totalinches;
    cout << "cm is : " << cm << "cm" << endl;

    return 0;
}