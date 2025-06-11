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
    int num = 0; // Number to be input assigned with 0

    cout << " Enter a number : "; // PROMPT
    cin >> num;

    cout << "\n"; // SPACING

    if (num % 2 == 0) // MAIN CONDITION
    {
        cout << " " << num << " is an EVEN number. "; // EVEN NUMBERS HAVE NO REMAINDER
    }
    else
    {
        cout << " " << num << " is an ODD number. "; // ODD NUMBERS DO HAVE A REMAINDER (AT LEAST 1)
    }

    return 0;
}