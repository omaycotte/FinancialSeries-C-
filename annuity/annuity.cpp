#include <iostream>
#include <cmath>
using namespace std;
/**
    Annuity: 
    file        annuity.cpp
    author      O. Maycotte
    version     1.0 04/20/2021
    purpose:    Calculates the present value of an instrument that offers to pay an annuity
                for a number of periods followed by a lump sum at the end of the term
*/


/**
 * prototype declaration
 */
double present_value(double principal, double annuity, double r, int n);

int main()
{
    // asking price
    double instrument_price = 1243.83; 
    // the instrument pays this amount at the end of each period
    double coupon = 100;
    // in addition a lump sum is delivered with the last payment
    double principal = 1000;
    // the term is 5 years
    int n = 5;
    // the interest rate targeted by investor
    double r = 6.25;
    // calculate the present value of the instrument and decide to purchase or not
    double instrument_value = present_value(principal, coupon, r, n);
    // how much money does the investor need to pay today?
    cout << "The instrument is offered to you at a price of: $" << instrument_price << endl;
    cout << "       The present value of Annuity instrument: $" << instrument_value << endl;

    // recommendation
    bool should_purchase = (instrument_value > instrument_price );

    double profit_loss = (instrument_value - instrument_price);
    cout << "*---------------------------------------------" << endl;
    cout << "Only purchase the instrument if the actual value is greater than the asking price" << endl;
    cout << "Recommendation:" << endl;
    if (should_purchase)
        cout << "Purchase, you will make extra: $" << profit_loss << endl;
    else
        cout << "DO NOT Purchase, you would lose: $" << profit_loss << endl;

    cout << "*---------------------------------------------" << endl;
    
    return 0;
}
/**
    function    present_value
    file        annuity.cpp
    author      O. Maycotte
    version     1.0 04/20/2021
    param       principal or lump sum paid at the end of n periods
    param       annuity or coupon paid at the end of each period for n periods
    param       rate (r) - target interest rate 
    param       N - number of periods
    return     present value of the instrument
*/
double present_value(double principal, double annuity, double r, int n)
{

    double value = annuity * (1.0 - 1.0 / pow((1.0 + (r/100.0)), double(n))) / (r/100.0) + \
                principal * (1.0 /pow((1.0 + (r/100.0)), double(n)));

    return value;
}
