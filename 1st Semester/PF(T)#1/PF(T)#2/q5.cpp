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
    int unit, temp, result = 0; // temp meaning temperature

    cout << "Enter Temperature : "; // INPUT PROMPT
    cin >> temp;

    cout << endl; // SPACING

    cout << "SELECT ANY ONE UNIT" << endl; // ASKING FOR UNIT IN TEMPERATURE
    cout << "\t1. CELCIUS" << endl;
    cout << "\t2. FAHRENHEIT"<< endl;    
    cin >> unit;

    cout << endl; // SPACING

    if (unit == 1)
    {
       result = temp * 9/5 + 32; // FORMULA
       cout << "Temperature in Fahrenheit : " << result; // OUTPUT
    }
    else if (unit == 2)
    {
        result = (temp - 32) * 5/9;
        cout << "Temperature in Celcius : " << result; // OUTPUT
    }

    return 0;
}