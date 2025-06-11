// q1
#include <iostream>
#include <string> // as we are doing operations on string variables
using namespace std;

// FINAL

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " Assignment # 8\n";

    //  Reverse a Given String ?

    // PROGRAM CODE
    
    string value; // Variable to enter string data

    cout << " Enter a string : ";
    getline(cin,value); // INPUT Prompt

    cout << endl; // SPACING

    for (int i = value.length() - 1 ; i > -1; i--)
    {
        cout << value[i]; // reversing a given string as per for loop condition
    }

    return 0;
}