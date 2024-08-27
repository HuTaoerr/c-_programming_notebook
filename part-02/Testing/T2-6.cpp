/*
编写一个程序，输出以下图案：
    *
  *   *
*   *   *
我输了，TMD想了一晚上没想出怎么不用cout来弄，和数学归纳有关和递归有关？
*/
//         9
//       7   11
//     5   9   13
//   3   7   11   15
// 1   5   9   13    17
//     5
//   3   7
// 1   5   9

// 1 3 5 7 9
/*
当n为奇数时，x=nxn;
当n为偶数时，x=nxn-(n-1)。


 */
#include <iostream>
using namespace std;

int main()
{

    cout << "    *" << endl;
    cout << "  *   *" << endl;
    cout << "*   *   *" << endl;
    return 0;
}