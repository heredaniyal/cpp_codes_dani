#include <iostream>

using namespace std;

int main() {
    // PERSONNEL INFORMATION
    cout << "Name: Muhammad Azeem Zahid" << endl;
    cout << "Roll no: F2023266465" << endl;
    cout << "Section: V10" << endl;
    cout << "Semester: Fall" << endl;

    float input, quantity, cost, total = 0;
    char ch;

    cout << "Menu" << endl;
    cout << "Hamburger: $4.50 \nCheeseburger: $5.00 \nFrench fries: $2.50 \nSoft drink: $1.50" << endl;

    do {
        cout << "To order from the display menu \nPress 1 for hamburger \nPress 2 for Cheeseburger \nPress 3 for French fries \nPress 4 for Soft drink" << endl;
        cin >> input;

        while (input < 1 || input > 4) {
            cout << "INVALID! Enter a valid input between (1-4): ";
            cin >> input;
            cout << endl; // SPACING
        }

        cout << "Enter the quantity: ";
        cin >> quantity;

        if (input == 1) {
            cost = 4.50 * quantity;
            cout << "Your total bill = " << cost << "$" << endl;
        } else if (input == 2) {
            cost = 5.00 * quantity;
            cout << "Your total bill = " << cost << "$" << endl;
        } else if (input == 3) {
            cost = 2.50 * quantity;
            cout << "Your total bill = " << cost << "$" << endl;
        } else if (input == 4) {
            cost = 1.50 * quantity;
            cout << "Your total bill = " << cost << "$" << endl;
        } else {
            cout << "Invalid input" << endl;
        }

        total = total + cost;

        cout << "Do you want to order more items? (Y/N)" << endl;
        cin >> ch;

    } while (ch == 'Y' || ch == 'y');

    cout << "Your total = " << total << "$";

    return 0;
}
