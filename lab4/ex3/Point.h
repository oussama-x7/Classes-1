// in the class Point we will use composition
#ifndef POINT_H
#define POINT_H
#include "Rational.h"

class Point
{
private:
    Rational x, y;

public:
    Point(const Rational & = Rational(), const Rational & = Rational());
    Rational GETX() const;
    Rational GETY() const;
    void SETX(const Rational &);
    void SETY(const Rational &);
    void Print_p() const ;
    friend class Segment;
};

#endif
