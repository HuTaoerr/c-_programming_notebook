/*
编写一个计算员工每月工资，并打印出来的程序，净收入是将以下扣除计算出来的。


 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const double Federal_Income_Tax = 0.15;
const double State_Tax = 0.035;
const double Social_Security_Tax = 0.0575;
const double Health_Insurance = 75.00;

int main()
{
    ofstream outData;
    string name;
    double income, Federal, State, Social_security, pay;

    outData.open("./../T3-6outData.txt");

    cout << "输入员工姓名： " << endl;
    getline(cin, name);

    cout << "输入员工薪水： " << endl;
    cin >> income;

    // 计算各类Tax
    Federal = income * Federal_Income_Tax;
    State = income * State_Tax;
    Social_security = income * Social_Security_Tax;
    pay = income - Federal - State - Social_security - Health_Insurance;
    
    outData << left << name << endl;
    outData << fixed << showpoint << setprecision(3);
    outData << left << setw(30) << setfill('.') << "Income Amount: " << "$" << income << endl;
    outData << left << setw(30) << setfill('.') << "Federal Tax: " << "$" << Federal << endl;
    outData << left << setw(30) << setfill('.') << "State Tax: " << "$" << State << endl;
    outData << left << setw(30) << setfill('.') << "Social security Tax: " << "$" << Social_security << endl;
    outData << left << setw(30) << setfill('.') << "Health Insurance: " << "$" << Health_Insurance << endl;
    outData << left << setw(30) << setfill('.') << "net Pay: " << "$" << pay;

    outData.close();

    return 0;
}
