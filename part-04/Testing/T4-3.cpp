/*
输入1个数，介于0~35之间，
如果此数小于或等于9，则输出此数；
否则输出对应的ASCII码，因为A对应10
提示：强制转换static_cast<char>()

遇到了个问题本来我直接用num来转换，结果一直输出为空，实际上为了转换成ABC还得+55，并不是A在ASCII表里对应10
无语

  */
#include <iostream>
using namespace std;

int main()
{
    int num;
    char ch;

    // cout << "请输入1个数，介于0~35之间： ";
    // cin >> num;
    // cout << endl;
    num = 13;
    ch = static_cast<char>(num + 55);

    if (num <= 9)
    {
        cout << "就是这个数： " << num << endl;
    }
    else
    {
        cout << "转换成ABC： " << ch << endl;
    }

    return 0;
}
