#include <iostream>
using namespace std;

/* 7. Write a program that takes 10 numbers from the user, stores them in an array, and
displays the smallest number. */

//  DONE!
int smallest(int a[]) // array passed here
{
    int value = a[0]; // first value to be stored in value (smallest) for comparison

    for (int i = 1; i < 10; i++) // 1 to 9 as 0 index value is already in value
    {
        if (a[i] < value) // kya current value smallest sai bhi choti hai?
        {
            // ussi value ko smallest mai daal do (value)
            value = a[i];
        }
    }    

    return value; // SMALLEST RETURN TO MAIN

}

int main() 
{
    int a[10]; // as per question

    // INPUT 
    for (int i = 0; i < 10; i++) // 0 to 9
    {
        cout << " ENTER A NUMBER : ";
        cin >> a[i]; 
    }

    // STORED VALUES IN ARRAY
    cout << " SMALLEST : " << smallest(a) << endl;

    return 0;
}