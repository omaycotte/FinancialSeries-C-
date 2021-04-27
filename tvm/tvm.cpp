#include <iostream>
#include "pv.hpp"

using namespace std;

/**
    Time Value of Money: 
    file        tvm.cpp
    author      O. Maycotte
    version     1.0 04/12/2021
    purpose:    Calculates the present value of a string of cash flows at a specified interest rate
                consumes a free function named present_value found in pv.cpp 
*/
int main()
{
    // the seller offers this:
    // selling price is $1,243.83  
    // year         payment
    // from now     by issuer
    //    1             100
    //    2             100  
    //    3             100  
    //    4             100  
    //    5           1,100
    
    // declare the instrument price
    double instrument_price = 1243.83;
    // create an array with the promised inflows
    valarray<double> cashflows = { 0., 100., 100., 100., 100., 1100. };
    // declare the investor's target interest rate
    double interest_rate = 6.25;

    // compute the present value of the cash flow amounts
    double instrument_value = present_value(cashflows, interest_rate);
    // how much money does the investor need to pay today?
    cout << "The present value of the cash flow is: $" << instrument_value << endl;

    // recommendation
    bool should_purchase = (instrument_value > instrument_price );
    double profit_loss = (instrument_value - instrument_price);
    cout << "*---------------------------------------------" << endl;
    cout << "Purchase the instrument if the actual value is greater than the selling price" << endl;
    if (should_purchase)
        cout << "Purchase, you will make extra: $" << profit_loss << endl;
    else
        cout << "DO NOT Purchase, you would lose: $" << profit_loss << endl;

    cout << "*---------------------------------------------" << endl;

    return 0;
}