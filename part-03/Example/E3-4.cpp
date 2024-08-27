/* 
endl既插入换行符又刷新缓冲区，而flush只刷新缓冲区不插入换行符。
在某些情况下，如果你希望确保输出立即显示而不想要换行符，可以使用flush；
如果你希望插入换行符并确保输出立即显示，可以使用endl
 */

#include <iostream>
using namespace std;

int main()
{

    cout << "Hello" << endl;
    cout << "World";

    cout << "+++++++++++++++++++" << endl;

    cout << "Hello";
    cout.flush();
    cout << " World";
    cout << "Enter the number" << flush;
    return 0;
}
