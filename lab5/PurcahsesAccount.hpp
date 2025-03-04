#ifndef PURCHASESACCOUNT_HPP
#define PURCHASESACCOUNT_HPP
#include <iostream>
using namespace std;
class PurchasesAccount
{
private:
    double Purchase_Balance;

public:
    static double AnnualDiscountRate;
    PurchasesAccount();
    PurchasesAccount(double);
    double calculateMonthlyDiscount() const;
    static void modifyDiscountRate(double);
    void New_balance();
    friend ostream &operator<<(ostream &, const PurchasesAccount &);
};
#endif