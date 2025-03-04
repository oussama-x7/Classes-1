#include <iostream>
#include <cmath>
#include <string>
#include "Triangle.h"
using namespace std;

// implementation file

// constructors

Triangle::Triangle(double first, double second, double third)
{
    setAllSides(first, second, third);
}

// check if valid
bool Triangle::TriangleIsValid() const
{
    return ((firstSide >= 0 && secondSide >= 0 && thirdSide >= 0) && ((firstSide + secondSide > thirdSide) && (firstSide + thirdSide > secondSide) && (thirdSide + secondSide > firstSide)));
}
// setters

void Triangle::setAllSides(double f, double s, double t)
{

    firstSide = f;
    secondSide = s;
    thirdSide = t;
    if (TriangleIsValid())
    {
        return;
    }
    else
    {
        cout << "Value are not valid" << endl;
        firstSide = 0.0;
        secondSide = 0.0;
        thirdSide = 0.0;
    }
}

double Triangle::getPerimeter() const
{
    return (firstSide + secondSide + thirdSide);
}
double Triangle::getArea() const
{
    double p = getPerimeter() / 2;
    return sqrt(p * (p - (firstSide)) * (p - (secondSide)) * (p - (thirdSide)));
}
std::string Triangle::Type() const
{

    if (firstSide == 0.0)
    {
        return "non valid ";
    }
    else
    {
        if (firstSide == secondSide && firstSide == thirdSide)
        {

            return "Equilateral";
        }
        else
        {
            if (firstSide == secondSide || firstSide == thirdSide || thirdSide == secondSide)
            {
                return "Isosceles ";
            }

            else
            {

                return "Scalene ";
            }
        }
    }
}

// print function
void Triangle::printTriangleinfo() const
{
    cout << "Trianlge [" << firstSide << " - " << secondSide << " - " << thirdSide << "]" << endl;
    cout << "Area = " << getArea() << endl;
    cout << "Perimeter = " << getPerimeter() << endl;

    cout << "the type is " << Type() << endl;
    cout << '\n';
}

void Triangle::GetSides(double &fr, double &sd, double &th)
{
    fr = firstSide;
    sd = secondSide;
    th = thirdSide;
}