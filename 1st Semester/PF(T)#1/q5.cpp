#include <iostream>
#include <cmath>
using namespace std;

int main() {
     // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB " << endl;
    cout << " ROLL NO : F2023266481 " << endl;
    cout << " SECTION : V10 " << endl;
    cout << " ASSIGNMENT # 1" << endl;

    // PROGRAM CODE
    double num1, num2, num3, num4, num5; // Take 5 numbers for input
    int sum = 0;

    // (a)
    cout << " Enter num1 : ";
    cin >> num1;

    cout << endl; // SPACING

    cout << " Enter num2 : ";
    cin >> num2;

    cout << endl; // SPACING

    cout << " Enter num3 : ";
    cin >> num3;

    cout << endl; // SPACING

    cout << " Enter num4 : ";
    cin >> num4;

    cout << endl; // SPACING

    cout << " Enter num5 : ";
    cin >> num5;

    cout << endl; // SPACING


    // (b)
    cout << " num1 : " << num1 << endl;
    cout << " num2 : " << num2 << endl;
    cout << " num3 : " << num3 << endl;
    cout << " num4 : " << num4 << endl;
    cout << " num5 : " << num5 << endl;

    // (c)
    num1 = static_cast<int>(round(num1));
    num2 = static_cast<int>(round(num2));
    num3 = static_cast<int>(round(num3));
    num4 = static_cast<int>(round(num4));
    num5 = static_cast<int>(round(num5)); 

    // OUTPUTTING INTEGER VERSIONS
    cout << "ROUNDED OFF NOW: " << endl;
    cout << " num1 : " << num1 << endl;
    cout << " num2 : " << num2 << endl;
    cout << " num3 : " << num3 << endl;
    cout << " num4 : " << num4 << endl;
    cout << " num5 : " << num5 << endl;
    
    sum = num1 + num2 + num3 + num4 + num5; // (d)

    cout << " Sum : " << sum << endl; // (e)
    cout << " Average : " << (sum/5) <<endl;
     
    return 0;
}
