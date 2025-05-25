#include <iostream>
using namespace std;

class Student
{
 private:
  string name;
  int roll;
  float marks;
 public:
   
   void setName(string n)
   {
    name = n;
   }
   void setRoll(int r)
   {
       roll = r;
   }
   void setMarks(float m)
   {
        if (marks >= 0 && marks <= 100)
        {
            marks = m;
        }
        else {cout << " MARKS ENTERED OUT OF RANGE (0-100) \n";}
   }

   string getName() {return name;}
   int getRoll() {return roll;}
   float getMarks() {return marks;}

};

int main()
{
    
    cout << " Submitted by : Muhammad Abdullah " << endl;
    cout << " Section: B " << endl;
    cout << " Department: BS IT " << endl;
    cout << " Roll number: Fall 2024/BS-IT/051 " << endl;
    cout << " Submitted to: Mam rabia " << endl;
    cout << " Date: 17/04/2025" << endl << endl;

    Student Abdullah;

    Abdullah.setName("Abdullah");
    Abdullah.setRoll(51);
    Abdullah.setMarks(93.5);

    cout<< " NAME : " << Abdullah.getName() << endl;
    cout<< " ROLL NUMBER : " << Abdullah.getRoll() << endl;
    cout<< " MARKS : " << Abdullah.getMarks() << endl;


    
    return 0;
}