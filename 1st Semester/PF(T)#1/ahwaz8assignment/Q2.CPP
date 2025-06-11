// Q2
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
    char newLetter;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Check if the string is long enough
    if (inputString.length() < 6) {
        cout << "String is too short. Please enter a longer string." << endl;
        return 1;
    }

    // Get the new letter
    cout << "Enter the new letter for the 6th position: ";
    cin >> newLetter;

    // Change the 6th letter in the string
    inputString[5] = newLetter;

    // Display the modified string
    cout << "Modified string: " << inputString << endl;

    return 0;
}
