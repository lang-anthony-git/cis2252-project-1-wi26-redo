//
//  main.cpp
//  cis2252-project-1-wi26-redo
//
//  Created by Anthony Lang on 4/15/26.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int days;
    int day;
    double pay;
    double total;

    pay = 0.01;
    total = 0;

    cout << "Enter days worked: ";
    cin >> days;

    while (days < 1 || days > 31)
    {
        cout << "Invalid. Enter days worked: ";
        cin >> days;
    }

    cout << fixed << setprecision(2);

    for (day = 1; day <= days; day++)
    {
        cout << "Day " << day << ": $" << pay << endl;

        total = total + pay;
        pay = pay * 2;
    }

    cout << "Total: $" << total << endl;
    return 0;
}
