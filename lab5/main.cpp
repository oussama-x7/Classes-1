#include <iostream>
#include "PurcahsesAccount.hpp"
using namespace std;

int main()
{
    PurchasesAccount customer1(200000);
    PurchasesAccount customer2(300000);
    // rate is 2 % :
    PurchasesAccount::modifyDiscountRate(2);
    customer1.calculateMonthlyDiscount();
    customer2.calculateMonthlyDiscount();
    customer1.New_balance();
    customer2.New_balance();
    cout << customer1 << endl;
    cout << customer2 << endl;
    // rate is 3 % :
    PurchasesAccount::modifyDiscountRate(3);
    customer1.calculateMonthlyDiscount();
    customer2.calculateMonthlyDiscount();
    customer1.New_balance();
    customer2.New_balance();
    cout << customer1 << endl;
    cout << customer2 << endl;
    return 0;
}