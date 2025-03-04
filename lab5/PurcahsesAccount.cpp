#include <iostream>
#include "PurcahsesAccount.hpp"
double PurchasesAccount::AnnualDiscountRate = 0.0;
using namespace std;
// constructors :
PurchasesAccount::PurchasesAccount() { Purchase_Balance = 0.0; }
PurchasesAccount::PurchasesAccount(double Purchase_Balance) { this->Purchase_Balance = Purchase_Balance; }

// static functions :

void PurchasesAccount::modifyDiscountRate(double annualDiscountRate) { AnnualDiscountRate = annualDiscountRate; }
// monthly discount :
double PurchasesAccount::calculateMonthlyDiscount() const
{

    return Purchase_Balance * (AnnualDiscountRate / 100) / 12;
}
void PurchasesAccount::New_balance() { Purchase_Balance -= calculateMonthlyDiscount(); }

// overload the << operator to dispalay the result for each instance :
ostream &operator<<(ostream &output, const PurchasesAccount &Account)
{
    output << "The information about this account are : " << endl;
    output << " The Purcahse balance is : " << Account.Purchase_Balance << " DZD " << endl;
    output << "the monthly discount is : " << Account.calculateMonthlyDiscount() << " DZD " << endl;
    output << "The Annual discount rate is  : " << Account.AnnualDiscountRate << " % " << endl;

    return output;
}