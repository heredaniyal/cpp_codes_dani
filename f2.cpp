#include <iostream>
using namespace std;

/* DONE
Question 2: Discount Calculation in Shopping
Scenario: Product has private price. Use a friend function applyDiscount to reduce the price.
*/

class Product
{
private:
double price;

public:

Product() // DEFAULT CONSTRUCTOR
{
 price = 150; // special coke by abdullah
}

friend double applyDiscount(Product V);
};

double applyDiscount(Product V)
{
    V.price = V.price - (V.price * 0.1); // 10/100 -> 0.1 -> 10% discount special offer
    return V.price;
}

int main()
{
    Product colanext;

    // 135 ana chahiye

    cout << " PRICE AFTER DISCOUNT : " << applyDiscount(colanext) << endl;

    return 0;
}