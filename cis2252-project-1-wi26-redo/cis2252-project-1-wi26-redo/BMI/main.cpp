//
//  main.cpp
//  cis2252-project-1-wi26-redo
//
//  Created by Anthony Lang on 4/15/26.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string month1;
    string month2;
    string month3;

    double rain1;
    double rain2;
    double rain3;
    double average;

    cout << "Enter first month: ";
    cin >> month1;

    cout << "Enter rain amount: ";
    cin >> rain1;

    cout << "Enter second month: ";
    cin >> month2;

    cout << "Enter rain amount: ";
    cin >> rain2;

    cout << "Enter third month: ";
    cin >> month3;

    cout << "Enter rain amount: ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3;

    cout << "The average monthly rainfall for ";
    cout << month1 << ", " << month2 << ", and " << month3;
    cout << " was " << average << " inches." << endl;
    return 0;
}
