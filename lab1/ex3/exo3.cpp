#include <iostream>
#include "header3.h"
using namespace std;
int main()
{
    Rational number1(2,5);
    Rational number2(3,6);
    Rational number3 = number1.multiplication(number2);
    number3.print();
    number3.printFloat();
    return 0;
};