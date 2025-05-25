#include <iostream>
using namespace std;

class Employee
{
  private:
  float salary;
  string name;
  int id;

  public:

  void setSalary(float s)
  {
    if (s > salary)
    {
        salary = s;
    }
  }

   void setName(string n)
   {
    name = n;
   }

   void setID(int i)
   {
    id = i;
   }

  string getName() {return name;}
  int getID() {return id;}
  float getSalary() {return salary;}
   
};

int main()
{

    cout << " Submitted by : Muhammad Abdullah " << endl;
    cout << " Section: B " << endl;
    cout << " Department: BS IT " << endl;
    cout << " Roll number: Fall 2024/BS-IT/051 " << endl;
    cout << " Submitted to: Mam rabia " << endl;
    cout << " Date: 13/04/2025" << endl << endl;

    Employee Sannan;

    Sannan.setName("Sannan Qayyum");
    Sannan.setID(1);
    Sannan.setSalary(30000);
    Sannan.setSalary(29999);

    cout<< " NAME : " << Sannan.getName() << endl;
    cout<< " ID : " << Sannan.getID() << endl;
    cout<< " Salary : " << Sannan.getSalary() << endl;
   
    return 0;
}