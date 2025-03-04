#ifndef HEADER3_H
#define HEADER3_H
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational(int a=0 , int b=1) {
       numerator = a;
       denominator = b ;
    };
    void reduce();
    Rational addition( const Rational &number);
    Rational substraction(const Rational &number);
    Rational multiplication(const Rational &number);
    Rational divison(const Rational &number);
   void  print();
   void printFloat();
};


int GCD(int a,int b);


#endif