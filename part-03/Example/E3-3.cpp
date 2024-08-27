/*
操作符setw
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 19;
    int a = 345;
    double y = 76.382;

    cout << fixed << showpoint;
    cout << "12345678901234567890" << endl;

    cout << setw(5) << x << endl;
    cout << setw(5) << a << setw(5) << y << setw(5) << x << endl
         << endl;

    cout << setprecision(2);
    cout << setw(6) << a << setw(6) << y << setw(6) << x << endl;
    cout << setw(5) << a << x << endl;
    cout << setw(2) << a << setw(4) << y << endl;
    return 0;
}
/* 
输出：
12345678901234567890
   19
  34576.382000   19

   345 76.38    19
  34519
34576.38
 */