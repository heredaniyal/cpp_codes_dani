#include <iostream>
using namespace std;

/*Task 3: Constructor and Destructor Order 
• Add constructors and destructors with cout statements in each class. 
• Observe and record the order of execution when you create and destroy a TeachingAssistant 
object. 
Expected outcome: Understand and explain the order in which constructors and destructors are 
executed. 
*/

/*
 class TeachingAssistant : public Student -> class Student : virtual public Person -> Person()
 -> Student -> class TeachingAssistant : public Employee -> class Employee : virtual public Person 
 As Person is already been executed and is shared memory space it will not go to person as it's the same
 pathway whether from going from Student or from Employee so Employee() and then
 finally TeachingAssistant() constructor will be run.

 Destructors will be the same just in reverse ordering.

*/

class Person
{ public:
  void displayInfo() // as per requirements bhai
  {
    cout << " Mohammad Abdullah. " << endl;
  }

  Person() {cout << " Person++ \n";} // Constructor
  ~Person() {cout << " Person-- \n";}// Destructor
};

// • Student and Employee both inherit from Person. 
class Student : virtual public Person  
{
    public:
    Student() {cout << " Student++ \n";} // Constructor 
    ~Student() {cout << " Student-- \n";} // Destructor
};

class Employee : virtual public Person 
{
    public:
    Employee() {cout << " Employee++ \n";} // Constructor
    ~Employee() {cout << " Employee-- \n";} // Destructor
};

// TeachingAssistant inherits from both Student and Employee. 
class TeachingAssistant : public Student, public Employee
{
    public:
    TeachingAssistant() {cout << " TeachingAssistant++ \n";} // Constructor
    ~TeachingAssistant() {cout << " TeachingAssistant-- \n";} // Destructor
};

int main()
{
  TeachingAssistant Riaz; // Object Made
    return 0;
}