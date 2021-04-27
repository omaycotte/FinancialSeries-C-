#ifndef __BOND_H__
#define __BOND_H__
#include <iostream>
#include <valarray>

using namespace std;
//  structure holding both dirty and clean bond prices
struct PRICE {
    double dirty_price;
    // double clean_price;
    double ai;
};

// a simple Bond class
class Bond
{
private:
    PRICE price;
    void calculate();
    double m_principal;
    double m_coupon;
    double m_days;
    double m_rate;
    int m_coupons_left;

public:
    // class ctor
    Bond(int data_context, double days, double principal, double coupon, double rate, int number_of_coupons_left);
    // return a struct holding both dirty and clean bond prices
    PRICE get_price();
    // class dtor
    ~Bond() {};


};

#endif  // __BOND_H__