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
    double weight;
    double height;
    double bmi;

    cout << "Enter weight: ";
    cin >> weight;

    cout << "Enter height: ";
    cin >> height;

    bmi = weight * 703 / (height * height);

    cout << "BMI is " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }

    if (bmi >= 18.5 && bmi <= 25)
    {
        cout << "Optimal weight" << endl;
    }

    if (bmi > 25)
    {
        cout << "Overweight" << endl;
    }

    
    return 0;
}
