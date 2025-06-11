#include <iostream>
using namespace std;

// DONE

int main()
{
    // TAKE an array of size 5
    int abdullah[5] = {1,2,3,4,5}; // input bhi ley sakta no issue mera nahi dil kar raha
    // input lene ka
    int sum = 0; // 0 daalna zaroori hai taakay garbage value na ajaye variable mai

    // we'll apply a for loop to traverse (move through) the whole array
    for (int i = 0; i < 5; i++) // 0 to 4
    {
        sum = sum + abdullah[i]; // it will now store all array elements 
        // as i'm traversing from start to finish
    }

    // NOW WE HAVE SUM, JUST DISPLAY IT
    cout << " SUM : " << sum << endl;

    return 0;
}