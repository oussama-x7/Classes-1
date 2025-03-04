#include <iostream>
#include "header3.h"
using namespace std;

Rational::Rational(int num = 0 ,  int den = 1  )
{
     numerator = num ;
     denominator = den;
     if ( denominator < 0 )
     {
        numerator = -numerator ;
        denominator = -denominator;
     }
}
void Rational::reduce()
{     
    Rational result;
       result.numerator = numerator / GCD(numerator,denominator);
      result.denominator = denominator / GCD(numerator,denominator);
      numerator = result.numerator;
      denominator = result .denominator;
}

void Rational::print()
{
    reduce();
    cout << "The Fractional form : " << numerator << "/" << denominator << endl;
}
void Rational::printFloat()
{
      cout<<"The Float representation of this number is : "<<static_cast<double>(numerator) / denominator <<endl;
}

Rational Rational::addition( const Rational &number)
{
    int resultNumerator = numerator * number.denominator  + number.numerator*denominator  ; 
    int resultDenominator = denominator * number .denominator ;
    return Rational(resultNumerator , resultDenominator);
}

Rational  Rational::substraction(const Rational &number)
{
   Rational result ;
    result.numerator = (numerator * (number.denominator)) - (denominator * (number.numerator));
    result.denominator = ((number.denominator) * denominator);

       result.reduce();

     numerator = result.numerator;
     denominator = result.denominator; 
   return result;
}

Rational Rational::multiplication(const Rational &number)
{
   Rational result ;
    result.numerator = (numerator*(number.numerator));
    result.denominator = ((number.denominator) * denominator);

       result.reduce();

     numerator = result.numerator;
     denominator = result.denominator; 
   return result;
}

Rational  Rational::divison(const Rational &number)
{
    Rational result ;
    result.numerator = (numerator*(number.denominator));
    result.denominator = (denominator*(number.numerator));

       result.reduce();

     numerator = result.numerator;
     denominator = result.denominator; 
   return result;
}

int GCD(int a, int b) // this function is to get the gcd in order to write the fraction in his reduced form
{
    int gcd;
    int r;
    int hold;
    if (b > a)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (a % b == 0 && (b != 0 && a != 0))
    {
        return b;
    }
    else
    {
        do
        {
            hold = r;
            r = a - b * (a / b);
            a = b;
            b = r;
        } while (r >= 1);
       return hold;
    } 
    }







