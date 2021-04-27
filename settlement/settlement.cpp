#include "bond.hpp"

// #include <iostream>
// #include <valarray>

// using namespace std;
// struct PRICE {
//     double dirty_price;
//     double clean_price;
// };

// class Bond
// {
// private:
//     PRICE price;
//     void calculate();
//     double p;
//     double c;
//     double d;
//     double r;
//     int n;

// public:
//     Bond(double days, int data_context, double principal, double coupon, double rate, int number_of_coupons_left);
//     PRICE get_price();

// };

// Bond::Bond(double days, int data_context, double principal, double coupon, double rate, int number_of_coupons_left)
// {

//     p = principal;
//     c = coupon;
//     d = days;
//     r = rate;
//     n = number_of_coupons_left;
//     if (data_context == 1)
//     {
//         r /= 2.0;
//         c /= 2.0;
//         n *= 2;
//     }
//     calculate();

// }
// void Bond::calculate()
// {
//     double w = d / 180.0;
//     double pv = 0.0;
    
//     valarray<double> cashflows[n+1];
//     for (int t=1; t < (n+1); t++)
//         pv += c / pow((1.0 + (r/100.0)), (t-1)+w);

//     pv += p / pow((1.0 + (r/100.0)), (n-1)+w);
//     double ai = c * (180.0-d) / 180.0;

//     price.dirty_price = pv;
//     price.clean_price = pv-ai;

// }

// PRICE Bond::get_price()
// {
//     return price;
// }

int main()
{


    // determining the price when settlement date falls within coupon periods
    // bond characteristics
    /**
     * How many days are there until the next coupon payment?
     * The convention is 30/360, that is each month has 30 days and the year 360 days, 
     * therefore a bond purchased with a settlement date of Jul 17 and coupon date of Sept 1.
	 * Reminder of July		13 days
	 * August               30
	 * September             1
		                    44 days
    */

    double days = 44;   // this number can be calculated using a function to derive from 2 date strings
                        // or using the Boost libraries
    // calculate the bond price using annual data
    // data context:
    // 1 = annual rate, coupon and number of leftover coupons
    int data_context = 1;

    // create a bond class and calculate by default
    Bond bond(data_context, days, 100, 10, 6.5, 6);
    // retrieve the bond prices (dirty and clean)
    PRICE price = bond.get_price();

    // present value or bond value
    // the dirty price is the price of a bond including the accrued interest.
    cout << "full or dirty price: " << price.dirty_price << endl;
    // the issuer will send the full coupon amount to the current holder (buyer)
    // the buyer must compensate the seller in the amount of:
    cout << "   accrued interest: " << price.ai << endl;
    // In finance, the clean price is the price of a bond excluding any interest accrued 
    // since bond's issuance and the most recent coupon payment.
    cout << "clean or flat price: " << price.dirty_price - price.ai << endl;

    return 0;
}