// HackerRank Day 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {

    cout << round(meal_cost * ((1 + tip_percent * 0.01) + (tax_percent * 0.01)));

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
