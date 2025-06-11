// Q1
#include<iostream>
using namespace std;
int main(){

    // Student Profile
    cout << "Name: Ahwaz Ahmad " << endl;
    cout << "Roll No: F2023266455 " << endl;
    cout << "Section: V-10 " << endl;
    cout << "Assignment # 8 \n\n " << endl;

    string inputString;

    // Get input from the user
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Reverse the string
    int length = inputString.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = inputString[i];
        inputString[i] = inputString[length - i - 1];
        inputString[length - i - 1] = temp;
    }

    // Display the reversed string
    cout << "Reversed string: " << inputString << endl;

   return 0;
}
