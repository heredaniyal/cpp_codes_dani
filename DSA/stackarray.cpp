#include <iostream>
using namespace std;

/*
LIFO --> LAST IN First OUT
STACK IN ARRAY
*/

int abdullah[5] , top = -1; // GLOBAL

void output() {
    cout << "START OF STACK" << endl;
    for (int i = top; i >= 0; i--) {
        cout << abdullah[i] << endl;;
    }
    cout << "END OF STACK" << endl << endl;
}

void push(int value) { // ADD + in STACK
     if (top == 4) { // IS STACK FULL?
        cout << " STACK IS FULL! " << endl;
     }
     else { // STACK IS NOT FULL
      // MEANING STACK MAI JAGHA HAI
      ++top;
      abdullah[top] = value;
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
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();

    return 0;
}