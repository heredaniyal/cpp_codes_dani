#include <iostream>
using namespace std;

// DONE & RUNNING

// return type is string for main to display the reversed name
string reversestring(string name) // reversing the whole string
{
    int j = 0; // START OF INDEX
    int i = name.size() - 1; // END of index

    // as we know string is an array of characters so.. pretty self explanatory

    /*
    // name.size() / 2 means kay naam ka 2 halves bass swap ho rahe tou
    // uski wajah sai hum bass chala rahe by half of name verna usne ussi reverse 
    // ko seedha naam kardena hai (all illustrated on diagram)
    for (int i = name.size() - 1; i >= (name.size()) / 2; i--) // 6 to 1 (size 7)
    {
        // i starts from end of string
        // j will start from start of string
        swap(name[j], name[i]); // ab elements hi swap hojaye gai (tested on diagram)
        j++; // i--
        // j agai hota rahega, i peeche hota rahega
    }
    */

    /* LEARNING POINT
    mera pichla logic chal tou raha tha but time consuming meaning less efficient
    because as per chatgpt baar baar vou (name.size()) / 2 ko calculate kar raha tha
    tou DSA Mai hum nay optimization aur time kam sei kam lage yeh seekhna zaroori hai
    while completely suits here as we need a conditional loop not controlled loop
    */

    while (j < i) // Directly compare pointers
    {
    swap(name[j], name[i]);
    j++; // start index ++
    i--; // end index --
    }

    return name; // returning to main function
}

int main()
{
    // i want to reverse a string named "daniyal" testing case
    // reverse meaning "layinad" yeh aana chhaiye

    string name; // for input

    // PROMPT
    cout << " ENTER YOUR NAME : ";
    getline(cin, name); // with spaces aswell now

    cout << " REVERSE NAME : " << reversestring(name) << endl; // ana chahiye layinad

    return 0;
}