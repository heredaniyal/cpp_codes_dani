// q5
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

    // Output every character UPPERCASE ?

    // PROGRAM CODE
    
    string value; // Variable to enter string data

    cout << " Enter a string : ";
    getline(cin,value); // INPUT Prompt

    cout << endl; // SPACING

    for (int i = 0; i < value.length(); i++) // for going through array
    {
        if (value[i] >= 'a' && value[i] <= 'z')
        {
            value[i] = value[i] - 'a' + 'A'; // This is the game of ASCII Values, removing lower case and adding upper case version
        }
    }

    cout << " UPPER CASE VERSION : " << value << endl; // OUTPUT

    return 0;
}