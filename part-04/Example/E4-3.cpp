/* 
if和校验输入流
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 1
    ifstream inputdata;
    inputdata.open("xx.txt");

    if (!inputdata)
    {
        cout << "文件打开失败" <<endl;
        return 1; //非0的返回代表程序中出错而终止程序
    }
    
    // 2
    if (cin)
    {
       cout << "input is ok" << endl;
    }
    

    return 0;
}
