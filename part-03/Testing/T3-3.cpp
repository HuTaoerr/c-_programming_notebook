/*
计算总的门票销售量的程序，门票分看台票、边线票、奖励票、普通票
输出到储存文件中
ticketsprice    sold
250
100
50
10

输出：
------------------------------------------
ticketsprice         | sold                
250                  | 57500               
100                  | 6700                
50                   | 37100               
10                   | 7120                
------------------------------------------

 */
#include <iostream>
#include <fstream>
using namespace std;

const int t1 = 250;
const int t2 = 100;
const int t3 = 50;
const int t4 = 10;

int main()
{
    ifstream inData;
    ofstream outData;

    inData.open("./T3-3inData.txt");
    outData.open("./T3-3outData.txt");

    int sold1, sold2, sold3, sold4;
    inData >> sold1 >> sold2 >> sold3 >> sold4;

    outData << setfill('-') << setw(42) << "-" << endl;
    outData << setfill(' ');
    outData << left << setw(20) << "ticketsprice" << setw(2) << " | " << setw(20) << "sold" << endl;
    outData << left << setw(20) << t1 << setw(2) << " | " << setw(20) << sold1 * t1 << endl;
    outData << left << setw(20) << t2 << setw(2) << " | " << setw(20) << sold2 * t2 << endl;
    outData << left << setw(20) << t3 << setw(2) << " | " << setw(20) << sold3 * t3 << endl;
    outData << left << setw(20) << t4 << setw(2) << " | " << setw(20) << sold4 * t4 << endl;
    outData << setfill('-') << setw(42) << "-" << endl;

    inData.close();
    outData.close();

    return 0;
}
