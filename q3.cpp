#include <iostream>
using namespace std;

// Q3 DONE

class Person // BASE CLASS
{
 protected:
 int age;
 string name;
};

class Player : protected Person // DERIVED CLASS
{
  private:
  double scores[5]; // as per requirement

  public:
  void input()
  {
     cout << " ENTER YOUR NAME : ";
     getline(cin, name);
     cout << " ENTER YOUR AGE : ";
     cin >> age;
     for (int i = 0;  i < 5; i++) // 0 to 4
    {
        cout << " Enter score " << i + 1 << " : ";
        cin >> scores[i];
    }
  }
  void display()
  {
    double sum = 0;
    for (int i = 0;  i < 5; i++)
    {
        sum = sum + scores[i];
    }
    cout << " AVERAGE SCORE : " << sum / 5 << endl;
  }
};

int main()
{
    Player Abdullah;
    
    Abdullah.input();
    Abdullah.display();
    return 0;
}