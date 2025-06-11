#include<iostream>
using namespace std;

// FINAL

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB " << endl;
    cout << " ROLL NO : F2023266481 " << endl;
    cout << " SECTION : V10 " << endl;

    // PROGRAM CODE
    
    // Print this Pattern
    /*
    
       *****
       ****
       ***
       **
       *
       with conditions (see register from Sir Sannan)

       1. FOR
       2. WHILE

    */

    int n; // Variable for printing stars

    for (int i = 5; i > 0; i--)
    {
        n = i; // i = 5 >> 4 >> 3 >> 2 >> 1
        while (n > 0)
        {
            cout << "*";
            n--; // REMOVING PROCESS (4)
        }
        cout << endl; // SPACING FOR NEW LINE
    }

    return 0;
    
}