/* 
文件的输入输出
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inData;
    ofstream outData;

    inData.open("./xx.dta");
    outData.open("./oo.out");

    inData.close();
    outData.close();

    return 0;
}