
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // 通过文件获取学生成绩
    ifstream inData;
    ofstream outData;
    int test1, test2, test3, test4, test5;
    double ave;
    string studentId;

    inData.open("./E3-9input.txt");
    outData.open("./E3-9output.txt");

    inData >> studentId;
    outData << "Student's id: " << studentId << endl;

    inData >> test1 >> test2 >> test3 >> test4 >> test5;
    outData << "Test stores : "
            << setw(9) << test1
            << setw(9) << test2
            << setw(9) << test3
            << setw(9) << test4
            << setw(9) << test5 << endl;

    // 计算平均分
    ave = static_cast<double>(test1 + test2 + test3 + test4 + test5) / 5;

    // 输出成绩与平均分
    outData << "平均成绩： " << ave << endl;

    //关闭文件
    inData.close();
    outData.close();
    return 0;
}
