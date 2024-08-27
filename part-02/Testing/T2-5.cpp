/*
Write a program that prompts the capacity, in gallons, of an automobile fuel
tank and the miles per gallons the automobile can be driven. The program
outputs the number of miles the automobile can be driven without refueling
编写一个程序，提示汽车油箱的容量（以加仑为单位）以及汽车每加仑可以行驶的英里数。
该程序输出汽车在不加油的情况下可以行驶的英里数。
*/

// 假设1加仑行驶30英里


#include <iostream>
using namespace std;

const double maxJl = 50.0; // 最大容量
const double  YL = 30.0;
double Jl, path; //当前容量、行驶公里数



int main()
{
    double useJl, oldpath;
    oldpath = 213.32;
    useJl = oldpath/YL;

    Jl = maxJl - useJl;
    double x;
    x = Jl * YL; //还能走多远
    cout << "不加油的话，当前油量可行驶" << x << "英里" << endl;
    return 0;
}