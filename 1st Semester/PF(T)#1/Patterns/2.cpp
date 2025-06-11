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

       1. WHILE
       2. FOR

    */

    int n; // Variable for printing stars
    int i = 5; // FOR WHILE LOOP

    while (i > 0) // FOR NEW LINE
    {
      for (int n = i; n > 0; n--) // PATTERN OUTPUT IN SINGLE LINE (*****)
      {
          cout << "*";
      }
      cout << endl; // SPACING 
      i--;
    }

    return 0;
}