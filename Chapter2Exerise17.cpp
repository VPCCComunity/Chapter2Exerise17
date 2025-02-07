/*
File Name:Chapter2Exercise17.cpp
Developer: Mark Goldstein
Date:Feb 2025;
Requirements;
Stock Commission  Kathryn bought 750 shares of stock at a 
price of $35.00 per share. She must pay her stockbroker a 
2 percent commission for the transaction. 
Write a program that calculates and displays the following:  
• The amount paid for the stock alone (without the commission).• 
The amount of the commission.
• The total amount paid (for the stock plus the commission).
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int stocks=750;
    double shareCost=35.00;
    double commissionPercent=.02;
    double purchaseCost = stocks * shareCost;
    double commission = commissionPercent * purchaseCost;
    double totalCost = purchaseCost + commission;
    cout << "The purchase cost of the stocks is :$" << purchaseCost << endl;
    cout << "The commision cost of the purchase is :$" << commission << endl;
    cout << "The total cost of the purchase is :$" << totalCost << endl;




}

