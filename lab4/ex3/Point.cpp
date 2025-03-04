#include <iostream>
#include "Point.h"
using namespace std;
Point::Point( const Rational & x , const Rational & y ) : x(x), y(y) {}

void Point::SETX(const Rational & x)
{

   this -> x = x ;

}
void Point::SETY(const Rational & y)
{
   this -> y = y ;
}
Rational Point::GETX() const
{
    return x;
}
Rational Point::GETY() const
{
    return y;
}
void Point::Print_p() const 
{
    x.print();
    '\n';
    y.print();
    '\n';
}