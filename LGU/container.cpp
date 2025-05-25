#include <iostream>
using namespace std;

// COMPLETED & TESTED

/* Scenario: A container is being filled with water at a changing rate.
Q1. Water Level in a Container (Volume over Time)  */

class Container
{
  private: 
  double current_volume, max_volume; // 2 data members

  public:
    Container (double m) 
    {
        max_volume = m;
    }

    void add_water(double rate, double time) // to simulate water being added over time.
    {
        double choice; // CONSTANT OR VARYING RATE KAY LIYE
    
        // PROMPT
        // CHOICE FOR USER WHETHER HE WANTS CONSTANT OR VARYING RATE
        do { // taakay user 1 or 2 kay ilawa kuch enter na kar sake
            cout <<" WHAT DO YOU WANT? " << endl; 
            cout <<" 1. CONSTANT RATE"<< endl;
            cout <<" 2. VARYING RATE" << endl;
            cin >> choice; 
        } while (choice < 1 || choice > 2); // -1, 0, 3,4 ye wale numbers par loop hojaye dobara

        cout << endl; // SPACING

        if (choice == 1) // CONSTANT RATE IT IS
        {
            for (int t = 1; t <= time; t++) // time changes all the time eg. 1 to 10
            {
                current_volume = current_volume + (rate * t); // calculation
                if (current_volume > max_volume) // meaning overflow hojaye agar
                {
                    break; // break from the FOR LOOP as no more water can be added
                }
                cout << current_volume << endl; // display of calculation after validation
                // more efficient way
            }
        }
        else // VARYING RATE IT IS THEN
        {
            for (double t = 1; t <= time; t++) // time changes all the time eg. 1 to 10
            {
                rate = (2*t) + 1; // rate = 2t + 1
                current_volume = current_volume + (rate * t); // calculation
                if (current_volume > max_volume) // meaning overflow hojaye agar
                {
                    break; // breakf rom the FOR LOOP as no more water can be added
                }
                cout << current_volume << endl; // display of calculation after validation
                // more efficient way
            }
        }

        // CONTAINER will GET FULL whatever the type of rate is (varying, constant)
        cout <<"FULL" << endl;
    } // end of add water function

    // RETURN TYPE STRING HAI
    string get_rate_of_change(double v1, double v2, double t1, double t2)
    {
        string answer = " "; // assigning space for removing garbage value

        // aik jo validation idhar lage gi is of dono times same nahi hone chahiye
        if (t1 >= t2) // is the starting time >= ending time?
        {
            // yes, meaning ye rate of change kay liye suitable nai
            // because of -ve and math error (10 - 10 -> 0)
            answer = " Ending time should be greater than Starting Time" ;
        }
        else {
            double rate = (v2 - v1) / (t2-t1);
            answer = to_string(rate); // built in function for converting
            // double to STRING
        }
            return answer;
    }
};

int main()
{
    // STUDENT DETAILS
    cout << " Submitted by : Muhammad Abdullah " << endl;
    cout << " Section: B " << endl;
    cout << " Department: BS IT " << endl;
    cout << " Roll number: Fall 2024/BS-IT/051 " << endl;
    cout << " Submitted to: Mam rabia " << endl;
    cout << " Date: 13/04/2025" << endl << endl;

    // CODE
    Container Areeb(20); // max = 20 L
         Areeb.add_water(2,10); // you can also pass values here
        cout << Areeb.get_rate_of_change(2,8,1,2);

}
