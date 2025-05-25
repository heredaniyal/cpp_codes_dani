#include <iostream>
using namespace std;

class BankAccount
{
 private: 
    int accountNumber;
    float balance;

    public:

    void setBalance(float b)
    {
         balance = b;
    }

    float getBalance() {return balance;}

};

int main()
{
    cout << " Submitted by : Muhammad Abdullah " << endl;
    cout << " Section: B " << endl;
    cout << " Department: BS IT " << endl;
    cout << " Roll number: Fall 2024/BS-IT/051 " << endl;
    cout << " Submitted to: Mam rabia " << endl;
    cout << " Date: 13/04/2025" << endl << endl;
  
    BankAccount Faysal; 

    Faysal.setBalance(20000);
    cout << " BALANCE : " << Faysal.getBalance();


    return 0;
}