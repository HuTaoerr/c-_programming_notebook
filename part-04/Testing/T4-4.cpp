/*
计算通话数分钟话费，连接费用：￥1.99，前3分钟￥2.00，后面每分钟￥0.45

 */
#include <iostream>
#include <iomanip>
using namespace std;

const double connectCost = 1.00;
const double costof3 = 2.00;
const double costofother = 0.45;

int main()
{
    double time;
    double otherTime;
    double cost;
    double num;

    cout << fixed << showpoint << setprecision(2);
    cout << "输入通话时长： ";
    cin >> time;
    cout << endl;

    cout << "基础连接费是： $" << connectCost << endl;
    cout << "前3分钟固定话费是： $" << costof3 << endl;
    if (time <= 3)
    {
        cost = connectCost + costof3;
    }
    else
    {
        // 计算下不满1分钟按1分钟算吧
        otherTime = time - 3;
        // 虽然如果被除0的话，规则上不允许，但是浮点数除0会有一个异常值，肯定不为1，所以这个if才得以运行，这里写的不满意
        if (otherTime / static_cast<int>(otherTime) != 1)
        {
            num = static_cast<int>(otherTime) + 1;
            cost = connectCost + costof3 + num * costofother;
            cout << "超3分钟话费是： " << num << " * " << costofother << " = $" << num * costofother << endl;
        }
        else
        {
            cost = connectCost + costof3 + otherTime * costofother;
            cout << "超3分钟话费是： " << otherTime << " * " << costofother << " = $" << otherTime * costofother << endl;
        }
    }

    cout << "总话费是： $" << cost << endl;

    return 0;
}
