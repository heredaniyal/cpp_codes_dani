// q2
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

    //  Change 6th letter

    // PROGRAM CODE
    
    string value; // Variable to enter string data

    cout << " Enter a string : ";
    getline(cin,value); // INPUT Prompt

    cout << endl; // SPACING

    if (value.length() > 5)
    {
        char replace; // character to be placed at 6th position
        
        cout << " Enter the value you want to replace at 6th Position : ";
        cin >> replace; // user enters

        value[5] = replace; // as string data also starts from 0 like an array

        cout << " Updated : " << value << endl; // Output with 6th letter added
    }
    else
    {
      cout << " String value is less than 6 characters! " << endl;
    }

    return 0;
}