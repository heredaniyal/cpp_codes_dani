#include <iostream>
using namespace std;

/*
LIFO --> LAST IN First OUT
STACK IN ARRAY
-Push only EVEN numbers onto the stack and display
HAPPY NEW YEAR 2026
01/01/2026
*/

int s[5] , top = -1; // GLOBAL

void output() { // STACK OUTPUT
    cout << "START OF STACK" << endl;
    for (int i = top; i >= 0; i--) {
        cout << s[i] << endl;;
    }
    cout << "END OF STACK" << endl << endl;
}

// MAIN CHECK IS HERE FOR ONLY even NUMBERS
void push(int value) { // ADD + in STACK
     if (top == 4) { // IS STACK FULL?
        cout << " STACK IS FULL! " << endl;
     }
     else if (value % 2 != 0) { // meaning it's odd
         cout << "NO ODD NUMBERS ALLOWED! " << endl;
     }
     else { // STACK IS NOT FULL & value is even
      // MEANING STACK MAI JAGHA HAI
      ++top;
      s[top] = value;
      output(); // OUTPUT IF ENTERED
     }
}

void pop() { // DELETE - from STACK
    if (top == -1) { // IS STACK EMPTY?
        cout << " STACK IS EMPTY! " << endl;
     }
     else { // STACK IS NOT EMPTY
      --top;
      output(); // OUTPUT IF ENTERED
     }
}

int main()
{
    // only 2,4,6 will be entered, just added 1 condition for even numbers
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    return 0;
}
