#include <iostream>
using namespace std;

/* abdx301@gmail.com
      A
    B/ \C
     \D/
*/

class A // EASY UNDERSTANDING KAY LIYE SAB KUCH PUBLIC RAKHTE
{
    public: 
    void yo()
    {
        cout << " WHAT'S UP MY NIGGA! \n";
    }
};

class B : public A // inheritance
{public:};

class C : public A // inheritance
{public:};

class D : public B, public C
{public:};

int main()
{
    // DIAMOND PROBLEM IN C++ (SPECIAL TRIBUTE TO SIR UMAR MIRZA)
    D abdullah;

    abdullah.yo();
    

    return 0;
}