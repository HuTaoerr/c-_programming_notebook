/*
输入流函数putback和peek的用法
 */
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Line1 : Enter a string: ";                                       // Line1 abcd
    cin.get(ch);                                                              // Line2
    cout << endl;                                                             // Line3
    cout << "Line4: After first cin.get(ch)" << "ch = " << ch << endl;        // Line4 a

    cin.get(ch);                                                              // Line5
    cout << "Line6: After second cin.get(ch),ch = " << ch << endl;            // Line6 b

    cin.putback(ch);                                                          // Line7 将b放回输入流，下一个get提取的将还是b
    cout << "zi" << ch << endl;
    cin.get(ch);                                                              // Line8
    cout << "Line9: After putback and then cin.get(ch), ch = " << ch << endl; // Line9 b

    ch = cin.peek();                                                          // Line10
    cout << "Line11: After cin.peek(), ch = " << ch << endl;                  // Line11 c

    cin.get(ch);                                                              // Line12
    cout << "Line13: After cin.get(ch), ch = " << ch << endl;                 // Line13 c

    return 0;
}
