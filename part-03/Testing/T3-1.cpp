/* 
文件输入与输出联系
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inData;
    ofstream outData;
    int num1, num2, num3, num4;
    char char1, char2;

    inData.open("./T3-1inData.txt");
    outData.open("./T3-1outData.txt");

    inData >> num1 >> num2;
    outData << "Sum of " << num1 <<" and " << num2 << " = " << num1 + num2 << endl;

    inData >> char1;
    char2 = char1 +1;
    outData << "The character that comes after " << char1 << " in the ASCII set is " << char2 << endl;


    inData >> num3 >> num4;
    outData << "The product of " << num3 << " and " << num4 << " is " << num3 * num4 << endl;

    inData.close();
    outData.close();
    return 0;
}
