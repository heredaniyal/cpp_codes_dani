#include<iostream>
using namespace std;

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB " << endl;
    cout << " ROLL NO : F2023266481 " << endl;
    cout << " SECTION : V10 " << endl;
    cout << " ASSIGNMENT # 1" << endl;

    // PROGRAM CODE
    int num1, num2, sum, sum1, sum2, sum3, sum4;
    int num1n, num1d, num2n, num2d = 0; // Singling
    
    cout << "Enter the 1st fraction's numerator : ";
    cin >> num1n;

    cout << endl; // SPACING

    cout << "Enter the 1st fraction's denominator : ";
    cin >> num1d;
    
    cout << endl; // SPACING

    cout << "Enter the 2nd fraction's numerator : ";
    cin >> num2n;

    cout << endl; // SPACING

    cout << "Enter the 2nd fraction's denominator : ";
    cin >> num2d;
    
    cout << endl; // SPACING
    
    cout << "1st Fraction : " << num1n << "/" << num1d<< endl; // 1st Fraction
    cout << "2nd Fraction : " << num2n << "/" << num2d << endl; // 2nd Fraction

    sum1 = num1n * num2d;  
    sum2 = num1d * num2n; 
    
    sum3 = sum1 + sum2; // Final Numerator Value
    sum4 = num1d * num2d; // Final Denominator Value

    cout << " Sum : " << sum3 << "/" << sum4 << endl;

    return 0;
}