#include <iostream>
using namespace std;

/*
FIBONACCI

1) ITERATIVELY
2) RECURSIVELY
*/

void iterativefibonacci(int n) {
    int n1 = 0, n2 = 1, result = 0; // 0 and 1 are fixed as per fibonacci rules
    for (int i = 0; i < n; i++) {
       cout << n1 << " "; // with some spacing for next numbers
       result = n1 + n2;
       n1 = n2;
       n2 = result;
    }
}

int recursivefibonacci(int n) {
    if (n <= 1) {return n;}
        return recursivefibonacci(n - 1) + recursivefibonacci(n - 2); 
}

int main()
{
    iterativefibonacci(5); // 5 numbers only 
    cout << recursivefibonacci(5);
    return 0;
}