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
    int shares;
    double shareCost;
    double commissionPercent;
    cout << "How many shares did you buy?";
    cin >> shares;
    cout << "How much did each share cost?";
    cin >> shareCost;
    cout << "How much was the commission percent?";
    cin >> commissionPercent;


    double purchaseCost = shares * shareCost;
    double commission = commissionPercent * purchaseCost;
    double totalCost = purchaseCost + commission;
    cout << "purchase cost  :$"<<setw(10) <<fixed<<setprecision(2)<< purchaseCost ;
    cout << "The commission cost :$" << setw(10) << fixed << setprecision(2) << commission;
    cout << "The total cost :$" << setw(10) <<fixed<< setprecision(2) << totalCost << endl;




}

