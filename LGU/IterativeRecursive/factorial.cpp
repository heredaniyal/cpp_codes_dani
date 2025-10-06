#include <iostream>
using namespace std;

/* FACTORIAL 

1) Iteratively
2) Recursively
*/

int iterativefactorial(int n) {
    int result = 1; // 1 iss liye as 0 multiply krne sai kohi faida nahi
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int recursivefactorial(int n, int result = 1) {
    if (n == 0){ 
        return result;
    }
    else {
        result = result * n; 
        --n; // so that new number can be multiplied next call
        return recursivefactorial(n, result);
    }
}

int main()
{
    cout << "ITERATIVE FACTORIAL of 5 : " << iterativefactorial(5) << endl; // simple call

    const int sum = 0, n = 1; // just for passing values
    // NOTE: WE CAN ALSO DIRECTLY pass values but i prefer variables for passing
    // so that no one can change values

    cout << "RECURSIVE FACTORIAL of 5 : " << recursivefactorial(5) << endl; // simple call
    
    return 0;
}