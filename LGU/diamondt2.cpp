#include <iostream>
using namespace std;

/* DONE 
Task 2: Fix the Diamond Problem Using Virtual Inheritance 
• Modify your previous code to use virtual inheritance for Student and Employee. 
Expected outcome: Ambiguity should be resolved. Explain how.
*/

/*
Explanation: Applying virtual will tell the compiler to share Person class to both Student
And Employee meaning 2 alag pathways nahi banein ge ab, aik hi shared pathway hoga jo marzi use karlo.
*/

class Person
{ public:
  void displayInfo() // as per requirements bhai
  {
    cout << " Mohammad Abdullah. " << endl;
  }

};

// • Student and Employee both inherit from Person. 
class Student : virtual public Person  
{};

class Employee : virtual public Person 
{};

// TeachingAssistant inherits from both Student and Employee. 
class TeachingAssistant : public Student, public Employee
{};

int main()
{
  TeachingAssistant Riaz; // Object Made
  
  Riaz.displayInfo(); // ambiguity will occur
    return 0;
}