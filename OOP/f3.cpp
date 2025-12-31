#include <iostream>
using namespace std;

// DONE
// Question 3 Scenario: Student has private marks. Result class needs access to calculate grades.

class Student
{
 private:
 int marks;

 public:
 Student() {marks = 50;} // passing marks given by default constructor
  friend int friendmarks(Student abd);
};

class Result
{
  public:
  void calculate(Student d)
  {
    cout << " GRADE : ";
     if (friendmarks(d) >= 90) { cout << "A";}
     if (friendmarks(d) >= 80) { cout << "B";}
     if (friendmarks(d) >= 70) { cout << "C";}
     if (friendmarks(d) >= 60) { cout << "D";}
     if (friendmarks(d) >= 50) { cout << "E";}
     else {cout << "F";}
  }
};

// FRIEND FUNCTION
int friendmarks(Student abd) // accessing marks
{
    return abd.marks;
}

int main()
{
    Student Abdullah; // 50

    Result r;

    r.calculate(Abdullah);
 
    return 0;
}