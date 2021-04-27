#include "bond.hpp"

Bond::Bond(int data_context, double days, double principal, double coupon, double rate, int number_of_coupons_left)
{

    m_principal = principal;
    m_coupon = coupon;
    m_days = days;
    m_rate = rate;
    m_coupons_left = number_of_coupons_left;
    if (data_context == 1)
    {
        m_rate /= 2.0;
        m_coupon /= 2.0;
        m_coupons_left *= 2;
    }
    calculate();

}

void Bond::calculate()
{
    
    double w = m_days / 180.0;               // compute fraction of period
    double pv = 0.0;                    // local var holding the present value
    
    // valarray<double> cashflows[n+1];    // allocate memory to hold cash 
    // calculate and accumulate the cash flow per period from coupon
    for (int t=1; t < (m_coupons_left+1); t++)
        pv += m_coupon / pow((1.0 + (m_rate/100.0)), (t-1)+w);

    // include the principal or lump sum paid at the end of last period
    pv += m_principal / pow((1.0 + (m_rate/100.0)), (m_coupons_left-1)+w);
    // compute accrued interest
    price.ai = m_coupon * (180.0-m_days) / 180.0;
    // bond prices (dirty and clean)
    price.dirty_price = pv;
    // price.clean_price = pv-price.ai;

}

PRICE Bond::get_price()
{
    // return prices and accrued interes
    return price;
}

