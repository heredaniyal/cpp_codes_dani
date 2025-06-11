#include <iostream>
using namespace std;

/* DONE
1.	Create a class Student to store the name and marks of 5 subjects. Calculate and display the average marks.
*/

class Student
{
 private:
 string name; 
 double marks[5]; // 5 ki array ban gayi hai

 public:
 void input() // ENTERING DATA INTO NAME AND MARKS
 {
    cout << " Entering Name : ";
    getline(cin, name);
    for (int i = 0;  i < 5; i++) // 0 to 4
    {
        cout << " Enter marks of subject " << i + 1 << " : " << endl;
        cin >> marks[i];
    }
 }

 void display()
 {
    double sum = 0;
    for (int i = 0;  i < 5; i++)
    {
        sum = sum + marks[i];
    }
    cout << " AVERAGE MARKS : " << sum / 5 << endl;
 }

};

int main()
{
    Student Abdullah;

    Abdullah.input();
    Abdullah.display();
    return 0;
}