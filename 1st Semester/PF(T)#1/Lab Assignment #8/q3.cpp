// q3
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

    //  frequency of characters

    // PROGRAM CODE
    
    string value; // Variable to enter string data
    char check; // specific character to be checked
    int freq = 0; // amount of specific character in string

    cout << " Enter a string : ";
    getline(cin,value); // INPUT Prompt

    cout << endl; // SPACING

    cout << " Enter the character in the string : ";
    cin >> check; // specific character entered

    cout << endl; // SPACING

    for (int i = 0; i < value.length(); i++) // going through string
    {
        if (value[i] == check) // Main condition
        {
            freq++;
        }
    }

    cout << " Frequency of " << check << " : " << freq << endl; // OUTPUT

    return 0;
}