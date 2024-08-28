/* 
Enter the movie name: Duckey and Mars

Enter the price of the adult ticket and child ticket: 4.5 3

Enter the number of the adult ticket and child ticket sold: 800 1850

Enter the percentage of donation: 10

***************************************************
Movie name:........................Duckey and Mars
Number of tickets sold:............2650
Gross Amout:.......................9150.00
Percentage of Gross Amout Donated:.10.00
Amout Donated:.....................915.00
Net Sale:..........................8235.00
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string moviename;
    double adult_TicketPrice, child_TicketPrice;
    int noofAdultTicketsSold, noofChildTicketsSold;
    double percentDonation, grossAmout, amoutDonated, netSaleAmount;

    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the movie name: " << flush;
    getline(cin, moviename);
    cout << endl;

    cout << "Enter the price of the adult ticket and child ticket: " << flush;
    cin >> adult_TicketPrice >> child_TicketPrice;
    cout << endl;

    cout << "Enter the number of the adult ticket and child ticket sold: " << flush;
    cin >> noofAdultTicketsSold >> noofChildTicketsSold;
    cout << endl;

    cout << "Enter the percentage of donation: " << flush;
    cin >> percentDonation;
    cout << endl;

    grossAmout = adult_TicketPrice * noofAdultTicketsSold +
                 child_TicketPrice * noofChildTicketsSold;
    amoutDonated = grossAmout * percentDonation / 100;
    netSaleAmount = grossAmout - amoutDonated;

    cout << "***************************************************" << endl;
    cout << setfill('.') << left << setw(35) << "Movie name:" << right << moviename << endl;
    cout << setfill('.') << left << setw(35) << "Number of tickets sold:" << right << noofAdultTicketsSold + noofChildTicketsSold << endl;
    cout << setfill('.') << left << setw(35) << "Gross Amout:" << right << grossAmout << endl;
    cout << setfill('.') << left << setw(35) << "Percentage of Gross Amout Donated:" << right << percentDonation << endl;
    cout << setfill('.') << left << setw(35) << "Amout Donated:" << right << amoutDonated << endl;
    cout << setfill('.') << left << setw(35) << "Net Sale:" << right << netSaleAmount << endl;

    return 0;
}
