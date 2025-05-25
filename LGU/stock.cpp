#include <iostream>
using namespace std; // QUESTION 2 STOCK PRICE

// COMPLETED & TESTED

/*
Scenario: Simulate real-time stock prices and compute the instantaneous rate of price change. 
Requirements: 
Create a Stock class with: 
symbol, price_history (store timestamps and prices) 
Method update_price(time, price) to add new data 
Method get_derivative_at(t) to calculate rate of change (price derivative at time t) 

 Use numerical differentiation (e.g., forward/backward difference) 
Bonus: 
 Add a plot() method to visualize price changes and derivative. 
 Simulate with random walk or real API data (optional for advanced students). 
Math tie-in: 
 The derivative of price with respect to time (dP/dt) reflects the instantaneous price 
trend—core in trading and data analysis. 
*/

struct PriceData // Structure for price_history
{
    string timestamp; // timestamp
    double price; // price at that time
};

class Stock
{
    private: 
    string symbol;
    PriceData price_history[100]; // Assuming a maximum of 100 data points
    public:
    Stock(string s = "$")  // Default Paratermized Constructor
    {
        // Initialize price history with a default value (e.g., 0.0)
        for (int i = 0; i < 100; i++)
        {
            price_history[i].price = 0.0;
        }
        symbol = s; // symbol like $, etc;
    }

    void update_price(string time, double price) // to add new data
    {
        for (int i = 0; i < 100; i++)
        {
            if (price_history[i].price == 0.0) // find the 1st empty slot
            {
                price_history[i].timestamp = time; // add timestamp
                price_history[i].price = price; // add price
                break;
            }
        }
    }

    double get_derivative_at(string time) // to calculate rate of change
    {
        double derivative = 0.0; // result storing variable
        for (int i = 0; i < 100; i++) // 0 to 99
        {
            if (price_history[i].timestamp == time) // find the timestamp
            {
                if (i > 0) // check if not the first element
                {
                    derivative = (price_history[i].price - price_history[i-1].price) / (1); // forward difference
                }
                break;
            }
        }
        return derivative; // if NOT FOUND, 0.0 will mean NOT FOUND MOST PROBABLY
    }

    // BONUS PART 
    void plot() // to visualize price changes and derivative
    {
        cout << "Price History for " << symbol << ":" << endl;
        for (int i = 0; i < 100; i++)
        {
            if (price_history[i].price != 0.0) // check if not empty
            {
                cout << price_history[i].timestamp << ": " << price_history[i].price << endl;
            }
        }
    }

}; // end of STOCK CLASS


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

    Stock s; // create a stock object with symbol $ and
    // initial price of 100

    s.update_price("2023-10-01 10:00", 100.5); // update price at timestamp
    s.update_price("2023-10-01 10:01", 101.0); // update price at timestamp
    s.update_price("2023-10-01 10:02", 101.5); // update price at timestamp
    s.update_price("2023-10-01 10:03", 102.0); // update price at timestamp
    s.update_price("2023-10-01 10:04", 102.5); // update price at timestamp
    s.update_price("2023-10-01 10:05", 103.0); // update price at timestamp

    double derivative = s.get_derivative_at("2023-10-01 10:02"); // get derivative at timestamp
    cout << "Derivative at 2023-10-01 10:02: " << derivative << endl; // print derivative

    s.plot(); // plot price history

    return 0;

} 

