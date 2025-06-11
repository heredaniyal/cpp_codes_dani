// q4
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

    // Output every character on different line ?

    // PROGRAM CODE
    
    string value; // Variable to enter string data

    cout << " Enter a string : ";
    getline(cin,value); // INPUT Prompt

    cout << endl; // SPACING

    for (int i = 0; i < value.length(); i++) // for going through array
    {
        cout << value[i] << endl; // every line will have single character now
    }

    return 0;
}