#include <iostream>
using namespace std;

int main()
{
    string x; // string value
    string y; // reverse string value

    cout << " Enter a string : "; // in c++
    cin >> x;

    // cout << x.size() << endl;

    for (int i = x.size(); i >= 0; i--) // we are going in reverse remmeber
    {
         y[i] = x[i];
    }

    cout << " String : " << x << endl;
    cout << " Reversed String : " << y << endl;

    return 0;
}
