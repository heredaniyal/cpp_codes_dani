// Q2
#include <iostream>
using namespace std;

int main() {
    // STUDENT DETAILS
    cout << " NAME : DANIYAL SAQIB\n";
    cout << " ROLL : F2023266481\n";
    cout << " SECTION : V10\n";
    cout << " PF THEORY ASSIGNMENT #3\n";

    char endit;

    do {
        /*
       
        Pounds = pods
        shillings = shill
        pence = pen

        */

        int pods1, shill1, pen1;
        int pods2, shill2, pen2;

        // Entering 1st Value's Amount in Old British Style Currency
        cout << "Enter 1st value amount in Old British Style Currency (pounds.shillings.pence) \n";
        
        cout << " Enter Pounds part of 1st Amount : ";
        cin >> pods1; 
        cout << endl; // SPACING

        cout << " Enter Shillings part of 1st Amount : ";
        cin >> shill1;

        cout << endl; // SPACING

        cout << " Enter Pence part of 1st Amount : ";
        cin >> pen1;

        cout << endl; // SPACING

        // Entering 2nd Value's Amount in Old British Style Currency
        cout << "Enter 2nd value amount in Old British Style Currency (pounds.shillings.pence) \n";
        
        cout << " Enter Pounds part of 2nd Amount : ";
        cin >> pods2; 
        cout << endl; // SPACING

        cout << " Enter Shillings part of 2nd Amount : ";
        cin >> shill2;

        cout << endl; // SPACING

        cout << " Enter Pence part of 2nd Amount : ";
        cin >> pen2;

        cout << endl; // SPACING

        // Calculate total amount in pence
        int totalPen = (pods1 + pods2) * 240 + (shill1 + shill2) * 12 + pen1 + pen2;

        // Total conversions of all Pences, shillings and Pounds
        int totalPods = totalPen / 240;
        int remainPen = totalPen % 240;
        int totalShill = remainPen / 12;
        int finalPen = remainPen % 12;

        // OUTPUT
        cout << "Total amount: £" << totalPods << "." << totalShill << "." << finalPen << " (My system cannot display the symbol i don't know why)"<< endl;

        // Ask the user to end the program if he wishes
        cout << "Press y to terminate the Program, else press n\n";
        cin >> endit;

    } while (endit != 'y' && endit != 'Y');

    return 0;
}
