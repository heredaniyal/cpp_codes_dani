#include<iostream>
using namespace std;

// FINAL!
// FIBONACCI SEQUENCE

int main()
{
    // PROGRAM CODE
    int previous = 0; // Previous Value
    int next = 1; // Next Value
    int current = 1;
    int num; // Entered Value
    int i = 0; // Temporary value

    cout << " Enter a number : ";
    cin >> num; // Entered Variable
     
    cout << "\n"; // SPACING

    while (i < num) // WHILE LOOP
    {
        if (i <= 1)
        {
            next = i; // initial values stored after 2 loops
            cout << next << endl; // OUTPUT RESULT
        }
        else
        {
            next = previous + current; // 0 = 0 + 1
            cout << next << endl; // OUTPUT RESULT
            previous = current;
            current = next;
        }
        i++; // Manual changing of variables
        // The reason i put i++ down is simple because it's just simply turning over the other loop
        // Yeah i could like add i++ in both if and else but this is more efficient
    }
    
    return 0;
}