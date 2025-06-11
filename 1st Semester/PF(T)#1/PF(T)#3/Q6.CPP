#include <iostream>
#include <cmath> // for power function
using namespace std;

// FINAL

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF Theory ASSIGNMENT # 3\n\n";

    // PROGRAM CODE
    int n1, n2, n3; // for storing individual digits
    int answer;

    cout << " Armstrong Numbers \n";

    for (int i = 1; i <= 500; i++)
    {
      if (i > 0 && i < 10) // 1 to 9
      {
       if (i == pow(i,3))
       {
          cout << i << endl;
       }
      }
    else if (i > 9 && i < 100) // 10 to 99
    {
       int n = i;
       n1 = n % 10;
       n = n / 10;
       n2 = n % 10;

       answer = pow(n1,3) + pow(n2,3);

       if (answer == i)
       {
         cout << i << endl;
       }
    }
    else if (i > 99 && i < 501) // 100 to 500
    {
       int n = i;
       n1 = n % 10;
       n = n / 10;
       n2 = n % 10;
       n = n / 10;
       n3 = n % 10;

       answer = pow(n1,3) + pow(n2,3) + pow(n3,3);

       if (answer == i)
       {
         cout << i << endl;
       }
    }
    }
    

    return 0;
}