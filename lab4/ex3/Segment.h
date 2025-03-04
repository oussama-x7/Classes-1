#ifndef SEGMENT_H
#define SEGMENT_H
#include "Point.h"

class Segment
{
private:
    Point Start;
    Point End;

public:
    Segment(const Point &  = Point(), const Point &  = Point());
    void Setstart(const Rational  & = Rational(),const  Rational &  = Rational());
    void Setend(const Rational &  = Rational(), const Rational &  = Rational());
    Point Getstart() const;
    Point Getend() const;
    double Demension() const;

    void Print();
};
#endif