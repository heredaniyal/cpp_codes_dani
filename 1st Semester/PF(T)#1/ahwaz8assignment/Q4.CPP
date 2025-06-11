// Q4
#include <iostream>
#include <string>

using namespace std;

int main() {

    // Student Profile
    cout << "Name: Ahwaz Ahmad " << endl;
    cout << "Roll No: F2023266455 " << endl;
    cout << "Section: V-10 " << endl;
    cout << "Assignment # 8 \n\n " << endl;

    string inputString;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Print each character in a new line using a loop
    cout << "Characters in a new line:" << endl;
    for (char character : inputString) {
        cout << character << endl;
    }

    return 0;
}
