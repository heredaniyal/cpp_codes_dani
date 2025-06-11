// Q3
#include <iostream>
#include <unordered_map>
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

    // Define an unordered map to store character frequencies
    unordered_map<char, int> charFrequency;

    // Count the frequency of each character in the string
    for (char character : inputString) {
        // Check if the character is not a space
        if (character != ' ') {
            // Increment the frequency in the map
            charFrequency[character]++;
        }
    }

    // Display the character frequencies
    cout << "Character frequencies:" << endl;
    for (const auto& pair : charFrequency) {
        cout << "'" << pair.first << "': " << pair.second << " times" << endl;
    }

    return 0;
}
