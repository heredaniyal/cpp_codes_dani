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
    int num, num1, num2, num3; // Taking 4 variables
    int largest; // For storing Largest Number

    cout << "Enter a 3 digit number : "; // PROMPT
    cin >> num;

    // Let's suppose we take num = 123

    num1 = num % 10; // 123 % 10 = 12.3 which remainder is 3 so num1 = 3
    num = num / 10; // 123 / 10 = 12.3 (Number reduced to 12)
    num2 = num % 10; // 12 % 10 = 2
    num = num / 10; // 12 / 10 = 1
    num3 = num % 10; // 1 % 10 = 1

    cout << " num1 : " << num1 << endl; // output for clarification
    cout << " num2 : " << num2 << endl; // output for clarification
    cout << " num3 : " << num3 << endl; // output for clarification

    // Now just use if else conditional statements

    if (num1 > num2 && num1 > num3) 
    {
       largest = num1; // num1 is the largest
    }
    else if (num2 > num1 & num2 > num3)
    {
       largest = num2; // num2 is the largest
    }
    else if (num3 > num1 && num3 > num2)
    {
       largest = num3; // num3 is the largest
    }

    cout << " Largest : " << largest;

    return 0;
}