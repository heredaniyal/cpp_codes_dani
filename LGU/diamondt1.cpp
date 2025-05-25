#include <iostream>
using namespace std;

/* DONE
Task 1: Implement the Diamond Problem Without Virtual Inheritance 
• Create four classes: Person, Student, Employee, and TeachingAssistant. 
• Student and Employee both inherit from Person. 
• TeachingAssistant inherits from both Student and Employee. 
• Add a displayInfo() function in Person and try calling it from TeachingAssistant. 
Expected outcome: You will encounter ambiguity. Note how the compiler responds. 
*/

class Person
{
  public:
  void displayInfo() // as per requirements bhai
  {
    cout << " Mohammad Abdullah. " << endl;
  }
};

// • Student and Employee both inherit from Person. 
class Student : public Person 
{
  
};

class Employee : public Person  
{
  
};

// TeachingAssistant inherits from both Student and Employee. 
class TeachingAssistant : public Student, public Employee
{
  
};

int main()
{
  TeachingAssistant Riaz; // Object Made
  
  Riaz.displayInfo(); // ambiguity will occur
    return 0;
}