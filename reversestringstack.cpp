#include <iostream>
using namespace std;

 // i'll now reverse a name using a stack using array

string name; // array of characters
int top; // for stack index

string reversestringstack(string name)
{
    // return type is string reverse name
    int i = top; // top index
    int j = 0; // start index

    cout << top << endl;

    while (i > j) // taakay index -1 tak na chala jaye (i is top indirect)
    {
        swap(name[i], name[j]); 
        i--;
        j++;
    }
    return name;
}

int main()
{ 
    // PROMPT
    cout << " ENTER YOUR NAME : ";
    getline(cin, name);

    top = name.size() - 1; // max index is always size - 1 as we start from 0

    cout << " REVERSED NAME : " << reversestringstack(name) << endl; // user defined
    // function called


    return 0;
}