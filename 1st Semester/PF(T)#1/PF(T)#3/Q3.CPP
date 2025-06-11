// Q3
#include <iostream>
using namespace std;

// FINAL

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF THEORY Assignment #3\n";

    // PROGRAM CODE
    int original, n; // 5 digit number to be input
    int reversed; // reversed number
    int n1, n2, n3, n4, n5; // for storing numbers

    cout << " Enter a 5-digit number : ";
    cin >> original; // INPUT

    cout << endl; // SPACING

    cout << " Original = " << original << endl;

    // let's suppose take n = 12345

    n = original; // As i want to compare the original value aswell, i am sending a copy to a variable named n
    n1 = n % 10; // 12345 % 10 means 1234.5 and decimal value 5 will be extracted and will be put to n1
    n = n / 10; // reducing the number as now n = 1234
    n2 = n % 10; // 4 
    n = n / 10; // 123
    n3 = n % 10; // 3
    n = n / 10; // 12
    n4 = n % 10; // 2
    n = n / 10; // 1
    n5 = n % 10; // 1

    reversed = (n1 * 10000) + (n2 * 1000) + (n3 * 100) + (n4 * 10) + n5; // combined
    
    cout << " Reversed = " << reversed << endl; // output reverse order

    if (original == reversed)
    {
       cout << " Original and Reversed are EQUAL" << endl;
    }
    else
    {
        cout << " Original and Reversed are NOT EQUAL!" << endl;
    }
      
    return 0;
}