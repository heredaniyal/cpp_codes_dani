#include <iostream>
using namespace std;

/* DONE
Question 4 Scenario: Patient has private health records. Doctor class (friend) can access and modify them.
*/

class Patient
{
private:
string name; // health records you can say for easier implementation

public:
Patient() {name = "Nawaz";} // default name given for implementation
friend class Doctor;
};

// friend class
class Doctor
{
 public:
  void changeName(Patient i)
  {
    i.name = "Imran";
    cout << " NEW NAME : " << i.name << endl;
  }
};

int main()
{
    Patient yo;

    Doctor js;

    js.changeName(yo);

    return 0;
}