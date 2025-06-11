#include <iostream>
using namespace std;

// DONE
// 4. Show Array Values in Reverse Order in C++ using Arrays

void display(int a[]) // array passed here
{
   for (int i = 0; i < 5; i++)
   {
      cout << a[i] << " "; // display in 1 row
   }
   cout << endl; // for new code on new line
}

int main()
{
    int a[5] = {1,2,3,4,5}; // input le lo ya yeh karlo aik hi baat
    // mainly need to reverse it, no matter the values

    // basically i applied a swapping algorithm of my own
    // BETTER EXPLAINED MORE ON DIAGRAM OR DRY RUNNING THIS CODE
    for (int i = 0; i < 5; i++) // (0 - 4) for traversing all values to their designated position
    {
        for (int j = 0; j < 4 - i; j++) 
        {
            swap(a[j], a[j+1]);
        }
    }

    // OUTPUT
    display(a);

    return 0;
}