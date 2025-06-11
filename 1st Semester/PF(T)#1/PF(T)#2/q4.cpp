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
    int percentage; // Percentage of marks scored in examinations for example

    cout << " Enter percentage : ";
    cin >> percentage;

    cout << endl; // SPACING

    // Grading Thresholds
    if (percentage >= 91 && percentage <= 100)
    {
        cout << " Grade : A "<<endl;
        cout << "EXCELLENT!"<<endl;
    }

    else if (percentage >= 81  && percentage <= 90)
    {
        cout << " Grade : B "<< endl;
        cout << "GOOD!"<< endl;
    }

    else if (percentage >= 71 && percentage <= 80)
    {
        cout << " Grade : C "<< endl;
        cout << "SATISFACTORY!"<< endl;
    }

    else if (percentage >= 61  && percentage <= 70)
    {
        cout << " Grade : D " << endl;
        cout << "BELOW AVERAGE!"<< endl;
    }

    else if (percentage <= 60)
    {
        cout << " Grade : F "<< endl;
        cout << " FAILED! "  << endl;
    }

    return 0;
}