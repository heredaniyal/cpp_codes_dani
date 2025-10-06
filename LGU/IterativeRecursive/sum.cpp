#include <iostream>
using namespace std;

/* Sum of 1st 10 natural number

1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

BOTH Variations are in the same file
1) ITERATIVE
2) RECURSIVE
*/

int iterativesum() { // just call this and it's easy
    int sum = 0; // simple sum variable

    for (int i = 1; i <= 10; i++) // 1 to 10 
    {
        sum = sum + i;
    }

   return sum; // function to main
}

// in recursion return type is useful always
int recursivesum(int sum, int n) {
    if (n > 10) // meaning n 11 jab chala jaye ye base case chal jaye (stop case)
    {
        return sum;
    }
    else { // n < 10
        sum = sum + n;
        // we have to increment (+) n so that new number can come in next case
        ++n;
        return recursivesum(sum, n);
    }
}

int main()
{
    cout << "ITERATIVE SUM : " << iterativesum() << endl; // simple call

    const int sum = 0, n = 1; // just for passing values
    // NOTE: WE CAN ALSO DIRECTLY pass values but i prefer variables for passing
    // so that no one can change values

    cout << "RECURSIVE SUM : " << recursivesum(sum, n) << endl; // simple call
    return 0;
}