/*
两个账户类型：存款账户、支票账户
每个账户必须有最小余额，如果余额小于最小余额，存款账户需要交￥10，支票账户需要交￥25的服务费
如果余额大于最小余额，将获得利息：
    存款账户 4%的利息
    支票账户 最小余额~ 5000的利息为3%，其余的为5%

读取账号，账户类型、最小余额、当前余额
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

const double cServercost = 25;
const double sServercost = 10;
const double sInterests = 0.04;
const double cInterestsone = 0.03;
const double cIntereststwo = 0.05;

int main()
{
    ifstream inData;
    ofstream outData;
    char account;
    string ID;
    double minincome, nowincome, finalincome;

    inData.open("./T4-7inData.txt");
    outData.open("./T4-7outData.txt");

    for (int i = 0; i < 4; i++)
    {
        getline(inData, ID, ' ');
        inData >> account >> minincome >> nowincome;

        // cout << "输入账号类型 c（支票账户） 或者 s（存款账户）" << endl;
        // cin >> account;

        // cout << "输入账户ID： ";
        // cin >> ID;
        // cout << endl;

        // cout << "输入设定的最小余额：";
        // cin >> minincome;
        // cout << endl;

        // cout << "输入当前余额： ";
        // cin >> nowincome;
        // cout << endl;

        switch (account)
        {
        case 'c': // zhi
            if (nowincome > minincome)
            {
                if (nowincome > 5000)
                {
                    finalincome = nowincome +
                                  (5000 - minincome) * cInterestsone + (nowincome - 5000) * cIntereststwo;
                }
                else
                {
                    finalincome = nowincome +
                                  (5000 - minincome) * cInterestsone;
                }
            }
            else
            {
                finalincome = nowincome - cServercost;
            }

            break;
        case 's':
            if (nowincome > minincome)
            {
                finalincome = nowincome +
                              nowincome * sInterests;
            }
            else
            {
                finalincome = nowincome - sServercost;
            }

            break;
        default:
            break;
        }

        outData << setfill(' ') << setw(5) << ID;
        outData
            << fixed << showpoint << setprecision(2)
            << setfill(' ') << setw(5) << account
            << setfill(' ') << setw(10) << minincome
            << setfill(' ') << setw(10) << nowincome
            << setfill(' ') << setw(10) << finalincome << endl;
    }

    inData.close();
    outData.close();

    return 0;
}
