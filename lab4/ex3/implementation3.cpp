#include <iostream>
#include "Rational.h"
using namespace std;

Rational::Rational(int num , int den )
{
    setRational(num, den);
}
void Rational::reduce()
{
    int gcd = GCD(numerator, denominator);

    if (gcd == 0)
        return;

    numerator /= gcd;
    denominator /= gcd;
}
 
void Rational::print() const 
{
cout << "The Fractional form : " << numerator << "/" << denominator << endl;
}
void Rational::printFloat()
{
    cout << "The Float representation of this number is : " << static_cast<double>(numerator) / denominator << endl;
}

Rational Rational::addition(const Rational &number)
{
    int resultNumerator = numerator * number.denominator + number.numerator * denominator;
    int resultDenominator = denominator * number.denominator;
    return Rational(resultNumerator, resultDenominator);
}

Rational Rational::substraction(const Rational &number)
{
    Rational result;
    result.numerator = (numerator * (number.denominator)) - (denominator * (number.numerator));
    result.denominator = ((number.denominator) * denominator);

    result.reduce();

    numerator = result.numerator;
    denominator = result.denominator;
    return result;
}

Rational Rational::multiplication(const Rational &number)
{
    Rational result;
    result.numerator = (numerator * (number.numerator));
    result.denominator = ((number.denominator) * denominator);

    result.reduce();

    numerator = result.numerator;
    denominator = result.denominator;
    return result;
}

Rational Rational::divison(const Rational &number)
{
    Rational result;
    result.numerator = (numerator * (number.denominator));
    result.denominator = (denominator * (number.numerator));

    result.reduce();

    numerator = result.numerator;
    denominator = result.denominator;
    return result;
}

int GCD(int b, int a)
{
    if (a == 0)
        return b; // Correct handling of zero input
    if (b == 0)
        return a; // Ensures correct output when b is 0

    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    int r = b % a;
    while (r)
    {
        b = a;
        a = r;
        r = b % a;
    }
    return a; // The correct return value
}
void Rational::setRational(int num, int denom)
{
    if (denom == 0)
    {
        std::cout << "Zero Division Error. Automatically set to 0/1." << std::endl;
        numerator = 0;
        denominator = 1;
    }
    else
    {
        numerator = (num * denom >= 0) ? abs(num) : -abs(num);
        denominator = abs(denom);
        reduce();
    }
}
int Rational::getnumerator() const
{
    return numerator;
}

int Rational::getdenomerator() const
{
    return denominator;
}

double Rational::operator-(Rational y ) const 
{
    return static_cast<double>((numerator * (y.denominator)) - (denominator * (y.numerator))) / static_cast<double>(((y.denominator) * denominator)) ;
}