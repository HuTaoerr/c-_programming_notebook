/*

操作符setfill('=')，用括号中的字符作为填充，比如这里就用=来填充

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x = 15;
    int y = 7862;

    cout << "12345678901234567890" << endl;
    cout << setw(5) << x << setw(7) << y << setw(8) << "warm" << endl;

    cout << setfill('+');
    cout << setw(5) << x << setw(7) << y << setw(8) << "warm" << endl;

    cout << setw(5) << x << setw(7) << setfill('=') << y << setw(8) << "warm" << endl;

    cout << setfill(' ');
    cout << setw(5) << x << setw(7) << y << setw(8) << "warm" << endl;

    return 0;
}

/* 

输出：
12345678901234567890
   15   7862    warm
+++15+++7862++++warm
+++15===7862====warm
   15   7862    warm

 */