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
    
    int num; // Number for Input

    cout << "Enter a number : "; // PROMPT
    cin >> num;

    cout << endl; // SPACING

    if (num > 0)
    {
        cout << "positive (+ve)";
    }
    else if (num < 0)
    {
        cout << "negative (-ve)";
    }
    else
    {
        cout << "zero (0)";
    }
    return 0;
}