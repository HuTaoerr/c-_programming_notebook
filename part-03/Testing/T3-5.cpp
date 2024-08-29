/*
华氏温度和摄氏温度的转换

 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double F; // 华氏温度
    double C; // 摄氏温度

    F = 109;
    C = (F - 32) * 5 / 9;

    cout << fixed << showpoint << setprecision(2);
    cout << "华氏温度" << F << "°F ————> " << "摄氏温度" << C << "°C" << endl;

    return 0;
}
