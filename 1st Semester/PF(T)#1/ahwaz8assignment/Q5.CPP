#include <iostream>
#include <cctype> // for toupper function
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

    // Convert the string to uppercase
    for (char &character : inputString) {
        character = toupper(character);
    }

    // Display the uppercase string
    cout << "Uppercase string: " << inputString << endl;

    return 0;
}
