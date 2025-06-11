// Q4
#include <iostream>
#include <cmath> // for power function and square root function
using namespace std;

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF Theory ASSIGNMENT # 3\n\n";

    // PROGRAM CODE
    
    // Given Values
    // C (3,3)
    const int r = 4; // radius is 4 as question is told us it's given
    cout << " GIVEN : \n";
    cout << " C (3,3)\n";
    cout << " r = 4\n\n";

    // variable declarations
    int x,y; // point values be given by user input
    int answer = 0; // storing value

    cout << " Enter x : ";
    cin >> x;

    cout << " Enter y : ";
    cin >> y; // (x,y)

    cout << endl; // SPACING

    answer = pow(x-3,2) + pow(y-3,2); // (x-a)^2 + (y-b)^2

    cout << " Answer : " << answer << endl; // for debugging

    if (answer > pow(r,2))
    {
        cout << " (" << x << "," << y << ")" << " is OUTSIDE THE CIRCLE!";
        cout << endl; // SPACING
    }
    else if (answer == pow(r,2))
    {
        cout << " (" << x << "," << y << ")" << " is ON THE CIRCLE!";
        cout << endl; // SPACING
    }
    else if (answer < pow(r,2))
    {
        cout << " (" << x << "," << y << ")" << " is INSIDE THE CIRCLE!";
        cout << endl; // SPACING
    }

    return 0;
}