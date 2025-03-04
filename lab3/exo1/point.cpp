#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

// constructor
Point::Point(double x =0.0 , double y=0.0)
{
    X = x;
    Y = y;
}

// getters
double Point::GetX() const
{
    return X;
}

double Point::GetY() const
{
    return Y;
}

// setters
void Point::SetX(double x)
{
    X = x;
}

void Point::SetY(double y)
{
    Y = y;
}

// additional Function

void Point::Translate(double x, double y)
{
    X += x;
    Y += y;
}

double Point::Distance(const Point &member1) const
{
    return sqrt(pow((X - member1.GetX()), 2) + pow((Y - member1.GetY()), 2));
}


// print

void Point::Print_Point() const
{
    cout << "Your point is : (" << X << "," << Y << ")" << endl;
}