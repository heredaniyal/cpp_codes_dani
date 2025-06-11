#include <iostream>
#include <string> 
using namespace std;

int main()
{
    cout << " Hafiz Abdul Moiz\n"; 
    cout << " F2023266477 \n";
    string s; 
    cout << " Enter string \n";
    getline(cin,s);
    int size = s.length();
    for (int i = 0;i<size;i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A'; 
        }
    }

    cout << s << endl; 

    return 0;
}