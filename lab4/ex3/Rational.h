#ifndef RATIONAL_H
#define RATIONAL_H
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;
    void reduce();

public:
    Rational(int = 0, int = 1);
    void setRational(int, int);
    Rational addition(const Rational &number);
    Rational substraction(const Rational &number);
    Rational multiplication(const Rational &number);
    Rational divison(const Rational &number);
    int getnumerator() const;
    int getdenomerator() const;
    void print() const ;
    void printFloat();
    double operator-(Rational) const;
    
};

int GCD(int a, int b);

#endif