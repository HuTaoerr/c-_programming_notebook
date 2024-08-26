/*
给美分找零钱
*/
#include <iostream>
using namespace std;

const int Halfdollar = 50;
const int Quarter = 25;
const int Dime = 10;
const int Nickel = 5;

int main()
{
    int change;
    cout << "Enter the change in cents: ";
    cin >> change;
    cout << "change is : " << change << endl;

    double Halfdollars;
    Halfdollars = change / Halfdollar;
    change %= Halfdollar;

    double Quarters;
    Quarters = change / Quarter;
    change %= Quarter;

    double Dimes;
    Dimes = change / Dime;
    change %= Dime;

    double Nickels;
    Nickels = change / Nickel;
    change %= Nickel;

    double pennies;
    pennies = change;

    cout << "We will give you \n" << Halfdollars << " Half dollars \n"
         << Quarters << " Quarters \n"
         << Dimes << " Dimes \n"
         << Nickels << " Nickels \n"
         << pennies << " Pennies"
         << endl;

        return 0;
}



