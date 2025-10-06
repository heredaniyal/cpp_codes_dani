#include <iostream>
using namespace std;

/* 
DONE
1) Iteratively
ONLY ITERATIVELY
*/

int iterativefactorial(int n) {
    int result = 1; // 1 iss liye as 0 multiply krne sai kohi faida nahi
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

void reversefibonacci(int n) {
    int a[100]; // just initialized taakay error na aye bass 
    // as c++ is memory costly

    int n1 = 0, n2 = 1, result = 0; // 0 and 1 are fixed as per fibonacci rules
    for (int i = 0; i < n; i++) {
       result = n1 + n2;
       a[i] = n1;
       n1 = n2;
       n2 = result;
    }

    // I'll use the reversing array technique
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}


int main()
{
    // REVERSE FACTORIAL DONE
    for (int i = 5; i > 0; i--) // 5 to 1
    {
        cout << iterativefactorial(i) << " ";
    }
    
    cout << endl; // SPACING

    // REVERSE FIBONACCI
    reversefibonacci(6);
    return 0;
}