#include <iostream>
using namespace std;

/* DONE
Question 1: Bank Account Balance Access
Scenario: Two classes: BankAccount stores balance, and Auditor needs to access the private balance without getter functions.
Task: Use a friend function to allow Auditor to check balance.
*/

class BankAccount
{
  private:
 int balance;
  public:
  
  BankAccount() {balance = 69000;} // default constructor hai ye taakay value assign hojaye

  friend int friendbalance(BankAccount BA);
};

class Auditor
{
   public:
   // for displaying purposes only of friend function
   void display(BankAccount BA)
   {
      cout << " BALANCE : " << friendbalance(BA) << endl;
   }
};

int friendbalance(BankAccount faysal)
{
    return faysal.balance;
}

int main()
{
   BankAccount sc; // STANDARD CHARTERED

   Auditor daniyal;

   daniyal.display(sc);
    return 0;
}