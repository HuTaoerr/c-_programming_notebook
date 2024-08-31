/*
编写程序，提示用户输入笛卡尔品管中的某一点（x，y），程序输出该点的位置
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "输入两个整数，作为x和y： ";
    cin >> x >> y;
    cout << endl;

    // 在原点上
    if (x == 0 && y == 0)
    {
        cout << "( " << x << " , " << y << " )" << "在原点";
    }
    // 在x轴上
    else if (y == 0)
    {
        cout << "( " << x << " , " << y << " )" << "在X轴上";
    }
    // 在y轴上
    else if (x == 0)
    {
        cout << "( " << x << " , " << y << " )" << "在Y轴上";
    }
    // 第一象限
    else if (x > 0 && y > 0)
    {
        cout << "( " << x << " , " << y << " )" << "在第一象限";
    }
    // 第二象限
    else if (x < 0 && y > 0)
    {
        cout << "( " << x << " , " << y << " )" << "在第二象限";
    }
    // 第三象限
    else if (x < 0 && y < 0)
    {
        cout << "( " << x << " , " << y << " )" << "在第三象限";
    }

    // 第四象限
    else if (x > 0 && y < 0)
    {
        cout << "( " << x << " , " << y << " )" << "在第四象限";
    }
    else
    {
        cout << "输入的不对" << endl;
    }

    return 0;
}
