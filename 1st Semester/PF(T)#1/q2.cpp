#include<iostream>
using namespace std;

int main()
{
     // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB " << endl;
    cout << " ROLL NO : F2023266481 " << endl;
    cout << " SECTION : V10 " << endl;
    cout << " ASSIGNMENT # 1" << endl;

    // PROGRAM CODE
    int costprice, sellprice = 0; // Declared Cost and Selling Price equal to 0
    int result = 0; // Result for storing Profit or Loss
    cout << "Enter the Selling Price : ";
    cin >> sellprice; // Input Selling Price

    cout << " \n "; // SPACING

    cout << "Enter the Cost Price : ";
    cin >> costprice; // Input Cost Price
   
    cout << " \n "; // SPACING

    if (sellprice > costprice)
    {
        result = sellprice - costprice;
        cout << " PROFIT : " << result; // All the benefit is going to business as selling price gives profit
    }
    else
    {
        result = sellprice - costprice;
        cout << " LOSS : " << result; // Buying price is more than selling it to customers, so it's loss
    }

    return 0;
}