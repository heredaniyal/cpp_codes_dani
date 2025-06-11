#include <iostream>
#include <cmath> // For enabling power function
using namespace std;

int main() {
    /* Question
    
     Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n
     (solve using loops) */

    // Answer

    float n; // number for entering
    float sum = 0; // For containing all sum values

    do // validation and input combined
    {
       cout << " Enter a number (>0) = ";
       cin >> n;

       cout << endl; // SPACING
    } while (n <= 0); // condition applied

    for (int i = 1; i<=n; i++)
    {
        sum = sum + (1 / pow(i,i)); // 1/1^1 + 1/2^2 + ...
    }


    cout << " Sum of numbers till " << n << " = " << sum << endl;

    return 0;
}