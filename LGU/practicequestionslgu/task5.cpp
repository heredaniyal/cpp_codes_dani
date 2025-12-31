/*
5. You are tasked with managing an inventory for a store. The inventory contains the stock
levels for 10 items. Write a program that:
● Initializes an array with stock levels for these items.
● Takes user input to restock a specific item by providing the item index and the number of
items to add.
*/

#include <iostream>
using namespace std;

// DONE
// for displaying the whole array
void display(int a[]) // array passed here
{
   for (int i = 0; i < 10; i++)
   {
      cout << a[i] << " "; // display in 1 row
   }
   cout << endl; // for new code on new line
}

int main()
{
    int stock[10] = {0,0,0,0,0,0,0,0,0,0}; // as per requirements with initialization

    /*● Takes user input to restock a specific item by providing the item index
     and the number of
     items to add.*/

     int index, num; // item index && items to add

    // PROMPT
    do
    {
        cout << " ENTER INDEX TO RESTOCK (0-9) : ";
        cin >> index;
    } while (index < 0 || index > 9); // jab tak out of range hai tab tak chalta reh
    
    do // PROMPT WITH VALIDATION
    {
        cout << " ENTER NUMBER OF ITEMS : ";
        cin >> num;
    } while (num < 0); // number of items should not be -ve

    stock[index] = stock[index] + num; // simply adding here into index stock

    display(stock);
    

    return 0;
}