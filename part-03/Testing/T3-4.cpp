/*
编写一个程序计算财产税，财产税是以财产评估价值的92%为基数计算的，如果估价是100000美元，财产税就按照92000美元计算，
假定财产税率为每100美元征收1.05美元，提示用户输入财产评估价值，程序输出财产税

输出：
Assessed value:                     100000.00
Taxable amount:                      92000.00
tax rate for each 100 is:                1.05
property tax:                          966.00


 */
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const double rate = 1.05;
const double cardinal = 0.92;
const double num = 0.01;

int main()
{
    // ifstream inData;
    ofstream outData;
    double property;
    double tax;

    // cout << " 输入财产估值： " << endl;
    // cin >> property;
    property = 100000;
    tax = property * cardinal * 0.01 * rate;

    outData.open("./T3-4outData.txt");
    outData << fixed << showpoint << setprecision(2);
    outData << left << setw(35) << "Assessed value: " << right << setw(10) << property << endl;
    outData << left << setw(35) << "Taxable amount: " << right << setw(10) << property * cardinal << endl;
    outData << left << setw(35) << "tax rate for each 100 is: " << right << setw(10) << rate << endl;
    outData << left << setw(35) << "property tax: " << right << setw(10) << tax << endl;

    outData.close();
    return 0;
}
