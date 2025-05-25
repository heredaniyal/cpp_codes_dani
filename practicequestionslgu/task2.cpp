#include <iostream>
using namespace std;

// DONE
// 2. Write a C++ code to find the average of 5 numbers using for loop and array.

int main()
{
    int abdullah[5] = {1,2,3,4,5}; // input bhi ley sakta no issue mera nahi dil kar raha
    // input lene ka
    int sum = 0, average = 0; // 0 daalna zaroori hai taakay garbage value na ajaye variable mai

    // we'll apply a for loop to traverse (move through) the whole array
    for (int i = 0; i < 5; i++) // 0 to 4
    {
        sum = sum + abdullah[i]; // it will now store all array elements 
        // as i'm traversing from start to finish
    }

    // NOW FOR AVERAGE
    average = sum / 5; // sum of numbers / total numbers

    // OUTPUT
    cout << " AVERAGE : " << average << endl;
}