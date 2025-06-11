#include <iostream>
using namespace std;

// Q2 DONE

class Employee // ye BASE CLASS hai
{
    protected:
    int empID;
    string name;
};

class Salary : protected Employee // ye derived class hai
{
   private:
   int basic; // ye basic salary hai
   int bonus;
   public:
   void input() // PROMPT HAI YE
   {
     cout << " ENTER Employee ID : ";
     cin >> empID;
     cin.ignore(); // garbage value nikalne kay liye in input buffer
     cout << " ENTER Employee Name : ";
     getline(cin, name);
     cout << " ENTER Employee Basic Salary : ";
     cin >> basic;
     bonus = basic * 0.2; // 20% bonus on basic salary
   }

   int display() // mai return kara raha hoon net salary instead of makiiing another variable, direct return
   {
    return basic + bonus; // net salary
   }
};

int main()
{
    Salary Abdullah; // OBJECT MADE

    Abdullah.input(); // PROMPT
    cout << " NET SALARY : " << Abdullah.display() << endl; // DISPLAYING NET SALARY
    
    return 0;
}