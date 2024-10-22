/*
Tite Chapter 4 Exercise 15 - Shipping Charges
File name:Chapter4ex15_Yaroslav_Shevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 10/22/2024
Requirements:

Write a program that asks for the weight of the package and the distance it is to be shipped, then display charges;

*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    double weight;
    double distance;
    double finalCost;

    //Input Validation (error handling)
    cout << "Input the weight in kg: (0 to 20)";
    cin >> weight;

    while (weight < 0 || weight > 20) {
        cout << "Incorrect input, enter the weight in kg (0 to 20): ";
        cin >> weight;
    }

    cout << "Input the distance in miles: (10 to 3000)";
    cin >> distance;

    while (distance < 0 || distance > 3000) {
        cout << "Incorrect input, enter the distance in miles (10 to 3000): ";
        cin >> distance;
    }

    //rates && charges

    if (weight <= 2) {
        finalCost = (1.10 / 500) * distance;
    }
    else if (weight <= 6) {
        finalCost = (2.20 / 500) * distance;
    }
    else if (weight <= 10) {
        finalCost = (3.70 / 500) * distance;
    }
    else 
        finalCost = (4.80 / 500) * distance;

    //display output
    cout << fixed << setprecision(2);
    cout << "\n You will be charged $" << finalCost << " for your package";

}

