/** 
 * 强制转换
 * 
*/

#include <iostream>
using namespace std;

int main()
{
    cout << static_cast<int>(7.9) << endl;
    cout << static_cast<double>(23) << endl;
    cout << static_cast<double>(15) / 2 << endl;
    cout << static_cast<int>(7.9) + 8<< endl;
    return 0;
}