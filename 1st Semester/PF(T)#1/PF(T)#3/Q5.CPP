// Q5
#include <iostream>
using namespace std;

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF Theory ASSIGNMENT # 3\n\n";

    // PROGRAM CODE
    int factorial = 1;
    int n;

    do // VALIDATION AND INPUT
    {
      cout << " Enter a +ve Number : ";
      cin >> n;

      cout << endl; // SPACING
    } while (n < 0);

    // Simple conditions
    if (n == 0)
    {
        cout << " Factorial = 1\n";
    }
    else
    {
        for (int i = n; i > 0; i--)
        {
            factorial = factorial * i;
        }
        cout << " Factorial : " << factorial << endl; // SPACING
    }

    return 0;
}