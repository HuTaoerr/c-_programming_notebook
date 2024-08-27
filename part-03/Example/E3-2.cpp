/* 

i/o操作符
setprecision：调整浮点数精度
fixed：将浮点数按照固定的小数格式输出
showpoint：强制显示小数点后的数字，不够的用0补

 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, y, z;
    x = 15.678;
    y = 234.79;
    z = 9862.9373;

    cout << "先输出下x,y,z: " << x << " " << y << " " << z << endl;

    cout << fixed << showpoint;                        //以固定的小数格式设置浮点数的输出，该格式带有小数点和末尾的0
    cout << setprecision(2);
    cout << "setprecision(2)" << endl;
    cout << "x= " << x << endl;                        //x= 15.68
    cout << "y= " << y << endl;                        //y= 234.79
    cout << "z= " << z << endl;                        //z= 9862.94

    cout << setprecision(3);
    cout << "setprecision(3)" << endl;
    cout << "x= " << x << endl;                        //x= 15.678
    cout << "y= " << y << endl;                        //y= 234.790
    cout << "z= " << z << endl;                        //z= 9862.937

    cout << setprecision(4);
    cout << "setprecision(4)" << endl;
    cout << "x= " << x << endl;                        //x= 15.6780
    cout << "y= " << y << endl;                        //y= 234.7900
    cout << "z= " << z << endl;                        //z= 9862.9373
    return 0;
}
