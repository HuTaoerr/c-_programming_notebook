#include <iostream>

using namespace std;

const int number = 12;

int main()
{
    int firstNum, secondNum;
    firstNum = 18;
    cout << "firstNum = " << firstNum << endl;

    cout << "Enter an integer: " ;
    cin >> secondNum;
    cout << "secondNum = " << secondNum << endl;

    firstNum = firstNum + number + 2*secondNum;
    cout << "new value of firstNum is : " << firstNum << endl;

    return 0;
}