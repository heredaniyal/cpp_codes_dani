#include<iostream>
using namespace std;

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB " << endl;
    cout << " ROLL NO : F2023266481 " << endl;
    cout << " SECTION : V10 " << endl;
    cout << " ASSIGNMENT # 2" << endl;

    // PROGRAM CODE
    int num1, num2; // TAKING TWO INPUTS
    
    cout << " Enter the 1st Number : "; // 1st number prompt
    cin >> num1;

    cout << endl; // SPACING

    cout << " Enter the 2nd Number : "; // 2nd Number Prompt
    cin >> num2;

    cout << endl; // SPACING

    if (num2 == 0)
    {
        cout << " SORRY! CANNOT DIVIDE BY 0!! ";
    }
    else
    {
        cout << " THESE ARE DIVISIBLE!" << endl;
        cout << num1 << " / " << num2 << " = " << (num1/num2); 
    }

    return 0;
}