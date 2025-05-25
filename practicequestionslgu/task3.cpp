#include <iostream>
using namespace std;

// DONE
// 3. users enter 5 numbers using for loop and all these numbers will store in an array.

// OPTIONAL!
void display(int a[]) // array passed here
{
   for (int i = 0; i < 5; i++)
   {
      cout << a[i] << " "; // display in 1 row
   }
   cout << endl; // for new code on new line
}

int main() // REQUIRED JUST MAIN
{
    int a[5]; // as per question

    // INPUT AND FOR LOOP (REQUIREMENTS)
    for (int i = 0; i < 5; i++) // 0 to 4
    {
        cout << " ENTER A NUMBER : ";
        cin >> a[i]; 
    }

    // STORED VALUES IN ARRAY
    display(a);

    return 0;
}