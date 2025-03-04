#include<iostream>
#include "header2.h"
using namespace std;
int main()
{

     Complex number1(3 , 5);
     Complex number2(2 , 6);
     Complex number3 = number1.addition(number2);
     number3.printComplex();
     number1.setComplexnumber(3,5);
    number1.printComplex();
    return 0;
}