#include <iostream>
using namespace std;

class Abdullah
{
   public:
   Abdullah() // default constructor
   {
     cout << " DANIYAL SAQIB! \n";
   }
   Abdullah(int a, string b) // paratermized constructor
   {
     cout << a;
   }
   Abdullah (string b, int a)
   {
    cout << b << endl;
   }
   
};

int main()
{
    Abdullah abd('A');
    return 0;
}