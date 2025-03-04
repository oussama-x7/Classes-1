#include <iostream>
#include <cmath>
#include "Segment.h"
using namespace std;

Segment::Segment(const Point &  x,const  Point &  y) : Start(x), End(y) {}

void Segment::Setstart(const Rational &  x, const Rational &  y)
{
    Start.SETX(x);
    Start.SETY(y);
}

void Segment::Setend(const  Rational &  x, const  Rational &  y)
{
    End.SETX(x);
    End.SETY(y);
}

Point Segment::Getstart() const
{
    return Start;
}
Point Segment::Getend() const
{
    return End;
}

double Segment::Demension() const
{
    return sqrt(pow(static_cast<double>(End.x - Start.x), 2) + pow(static_cast<double>(End.y - Start.y), 2));
}
void Segment::Print()
{
    cout << "the starting point of the segment is : ";
    Start.Print_p();
    '\n';
    cout << "the ending point of the segment is : ";
    End.Print_p();
    '\n';

    cout << "the dimension of the Segment is : " << Demension() << endl;
}
