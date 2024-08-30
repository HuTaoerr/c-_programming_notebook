/*
输出用户账号和收费总额

This program computes a cable bill.
Enter account number: 12345

Enter customer type: r(residential) or b(business)
b
Enter the number of basic service connections: 
16
Enter the number of premium channels: 
8
Accout number = 12345
Amount due = $520.00

 */
#include <iostream>
#include <iomanip>
using namespace std;

const double rBillProcessingFee = 4.50;
const double rBasicServiceCost = 20.45;
const double rCostofaPremiumChannel = 7.50;

const double bBillProcessingFee = 15.00;
const double bBasicServiceCost = 75.00;
const double bCostofaPremiumChannel = 50.00;
const double bBasicConnetionCost = 5.00;

int main()
{
    int accountNumber;
    char customerType;
    int numberOfPremiumChannels;
    int noOfBasicServiceConnetions;
    double amountDue;

    cout << fixed << showpoint << setprecision(2);
    cout << "This program computes a cable bill." << endl;

    cout << "Enter account number: ";
    cin >> accountNumber;
    cout << endl;
    cout << "Enter customer type: r(residential) or b(business)" << endl;
    cin >> customerType;

    switch (customerType)
    {
    case 'r':
        cout << "Enter the number of premium channels: " << endl;
        cin >> numberOfPremiumChannels;
        amountDue = rBillProcessingFee +
                    rBasicServiceCost +
                    numberOfPremiumChannels * rCostofaPremiumChannel;
        cout << "Accout number = " << accountNumber << endl;
        cout << "Amount due = $" << amountDue << endl;

        break;
    case 'b':
        cout << "Enter the number of basic service connections: " << endl;
        cin >> noOfBasicServiceConnetions;
        cout << "Enter the number of premium channels: " << endl;
        cin >> numberOfPremiumChannels;
        if (noOfBasicServiceConnetions <= 10)
        {
            amountDue = bBillProcessingFee +
                        bBasicServiceCost +
                        numberOfPremiumChannels * bCostofaPremiumChannel;
        }
        else
        {
            amountDue = bBillProcessingFee +
                        bBasicServiceCost +
                        (noOfBasicServiceConnetions - 10) * bBasicConnetionCost +
                        numberOfPremiumChannels * bCostofaPremiumChannel;
        }

        cout << "Accout number = " << accountNumber << endl;
        cout << "Amount due = $" << amountDue << endl;
        break;

    default:
        cout << "Invalid customer type." << endl;
        break;
    }

    return 0;
}
