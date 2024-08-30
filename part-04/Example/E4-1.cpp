
#include <iostream>
using namespace std;

int main()
{
    bool found = true;
    bool flag = false;
    int num = 1;
    double x = 5.2;
    double y = 3.4;
    int a = 5, b = 8;
    int n = 20;
    char ch = 'B';

    cout << "!found: " << !found << endl;
    cout << "x > 4.0: " << (x > 4.0) << endl;
    cout << " !num: " << !num << endl;
    cout << "!(found && (x>=0)): " << !(found && (x >= 0)) << endl;
    cout << "x+y <=20.5: " << (x + y <= 20.5) << endl;
    cout << "(n>=0)&&(n<=100): " << ((n >= 0) && (n <= 100)) << endl;
    cout << "('A' <= ch && ch <='Z': )" << ('A' <= ch && ch <= 'Z') << endl;
    cout << "(a+2<=b)&&!flag: " << ((a + 2 <= b) && !flag) << endl;

    return 0;
}
