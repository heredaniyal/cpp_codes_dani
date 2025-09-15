/* i will not use AI in this program */
// i want to try to make daniyal to DANIYAL for string conversion

// no AI
#include <iostream>
using namespace std;

int main() {
    string shahzaib = "daniyal";

    /*
    a = 97
    A = 65

    97 - 65 = 32

    subtract every letter by 32
    */

    // how to turn off copilot in vs code
    for (int i = 0; i < shahzaib.length(); i++){ // 0 to jitni bhi string ki length hai
        shahzaib[i] = shahzaib[i] - 32;
    }

    cout << shahzaib << endl;
}