// Q1
#include <iostream>
using namespace std;

// FINAL

int main()
{
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF THEORY ASSIGNMENT #3\n";

    // PROGRAM CODE

    // Declarations
    int choice1; // Choosing a menu item
    char choice2; // Whether to continue or not
    int quantity; // quantity of menu item from user
    int cost = 0; // bill of a single item also initialized to 0
    int total = 0; // Total bill initialized to 0 for removing garbage value

    do
    {
         // INPUT PROMPT
        cout << " MENU : \n";
        cout << " 1. Hamburger (4.5$)\n";
        cout << " 2. Cheeseburger (5$)\n";
        cout << " 3. French Fries (2.5$)\n";
        cout << " 4. Soft Drink (1.5$)\n";
        cout << " Enter your choice : ";
        cin >> choice1; // Input
        cout << endl; // SPACING For Output
    
       // Validation
       while (choice1 < 1 || choice1 > 4)
       {
          cout << " INVALID! Enter a value from (1-4) : ";
          cin >> choice1;

          cout << endl; // SPACING
       }

       cout << " Enter Quantity : ";
       cin >> quantity;

        cout << endl; // SPACING

       switch (choice1)
       {
            case 1: // Hamburger
            cost = 4.5 * quantity;
            cout << " Cost for now : " << cost << endl;
            break;

            case 2: // Cheese Burger
            cost = 5 * quantity;
            cout << " Cost for now : " << cost << endl;
            break;

            case 3: // French Fries
            cost = 2.5 * quantity;
            cout << " Cost for now : " << cost << endl;
            break;

            case 4: // Soft Drink
            cost = 1.5 * quantity;
            cout << " Cost for now : " << cost << endl;
            break;
       }

       total = total + cost; // sending individual cost to total cost for final receipt
       
       cout << "Do you want to continue (Y/N) : ";
       cin >> choice2;

       cout << endl; // SPACING
      
    } while (choice2 == 'Y' || choice2 == 'y');

    cout << " Total bill : " << total << endl; // End result

    return 0;
}