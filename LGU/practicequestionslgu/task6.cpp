/* DONE
6. A class teacher wants to process exam marks for a class of 10 students. Write a program
that:
● Takes marks as input from the user and stores them in an array.
● Determines and prints the number of students who scored above 50.
● Finds and displays the highest marks and the student index (assuming 1-based indexing).
*/

#include <iostream>
using namespace std;

int main()
{
    int student[10]; // as per program requirement (10 students)

    // INPUT
    for (int i = 0; i < 10; i++) // 0 to 9
    { 
        do // validation for -ve numbers
        {
            // show is tarah karwana kay 1 sai indexing start ho rahi
            // as per program requirement
            cout << " ENTER STUDENT " << i + 1 << " MARKS : ";
            cin >> student[i];
        } while (student[i] < 0); // marks cannot be negative
    }

    cout << endl; // for SPACING

    // OUTPUTTING STUDENTS WHO SCORED MORE THAN 50
    cout << "STUDENTS WHO SCORED MORE THAN 50 \n"; // display message for easiness of output
    for(int i = 0; i < 10; i++) // 0 to 9
    {
        if (student[i] > 50) // MAIN CONDITION
        {
            cout << " STUDENT " << i+1 << " MARKS : " << student[i] << endl;
        }
    }

    cout << endl; // for SPACING

    // ● Finds and displays the highest marks and the student index (assuming 1-based indexing).
    int highest = 0, sindex = 0; // highest number and student index who got them

    for (int i = 0; i < 10; i++) // 0 to 9
    {
        if (student[i] > highest)
        {
            sindex = i + 1; // (assuming 1-based indexing).
            highest = student[i]; // ussi value ko highest mai daal do
        }
    } 

    // simple output prompt
    cout << " STUDENT " << sindex << " GOT HIGHEST MARKS = " << highest << endl;
    
    // END

    return 0;
}