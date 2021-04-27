#include "pv.hpp"

/**
    Time Value of Money: Present Value
    file       pv.cpp
    author     O. Maycotte
    version    1.0 04/12/2021
    param      array containing cash flow amounts
    param      interest rate
    return     present value of cash flow amounts
*/
double present_value(valarray<double> cashflows, double interest_rate)
{

    // carries the present value of each of the cash flow amount
    double pv = 0.0;
    // expected annual rate in fraction
    double r = interest_rate / 100.0;
    // number of entries in the cash flow array
    int size = cashflows.size();

    // discount each of the cash flow amounts
    // C = coupon, M = principal
    // where the last cash flow = C + M
    for (int t=1; t < size; t ++)
        // pv = C / (1 + r) ^ t
        pv += cashflows[t] / pow((1.0 + r), double(t));

    return pv;

}