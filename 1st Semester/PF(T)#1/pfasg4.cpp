#include <iostream>
using namespace std;

int totalsum(int array[][2][2]) // calculating sum using a function
{
  int sum = 0;

  for (int i = 0; i < 2;i++)
  {
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++){
    sum = sum + array[i][j][k];
    }
    }
  }

  return sum; // Returning sum to main function's varaible

}

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF THEORY ASSIGNMENT # 4\n";
    cout << "FOR 3D ARRAY\n\n";

     // I'm going to make sum of array of 8 numbers

    // PROGRAM CODE
    int num[2][2][2]; // 2 x 2 x 2= 8 numbers of 3D Array
    int result; // for storing sum

   for (int i = 0; i < 2; i++) // for input
   {
    for (int j = 0; j < 2; j++)
    {
        for (int k = 0; k < 2; k++)
        {
      cout << " Enter the (" << i << "," << j << "," << k <<")" << " number : ";
      cin >> num[i][j][k];
        }
    }
   }

   cout << endl; // SPACING

    result = totalsum(num); 

    cout << " Sum : " << result << endl;

    return 0;
}