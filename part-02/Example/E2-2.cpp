/**
 * 强制转换
 *
 */

#include <iostream>
using namespace std;

int main()
{
    // static_cast更稳定
    cout << static_cast<int>(7.9) << endl;
    cout << static_cast<double>(23) << endl;
    cout << static_cast<double>(15) / 2 << endl;
    cout << static_cast<int>(7.9) + 8 << endl;
    cout << static_cast<char>(10) << endl;

    // 强制转换
    cout << double(5) << endl;

    return 0;
}