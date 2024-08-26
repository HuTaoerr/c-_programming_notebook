/* 
编写一个程序，提示用户输入一个矩形的长和宽，然后输出该矩形的面积和周长
 */

#include <iostream>
using namespace std;

int main()
{
    double length, width, area, per;
    cout << "Enter two number as a rectangle's length and width: " << endl;
    cin >> length >> width;


// 做一个输入校验？为时尚早，不会写


    area = length * width;
    per = (length + width) * 2;
    
    cout << "area is: " << area << endl;
    cout << "per is: " << per << endl;
    
    return 0;
}
