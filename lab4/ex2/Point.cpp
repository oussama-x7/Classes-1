#include <iostream>
#include "Point.h"

Point::Point(int abs , int ord )
{
    x = abs  ;
    y = ord  ;
}

void Display_Point(const Point &  point) 
{
   std::cout<<" Your Point is : ("<<point.x<<","<<point.y<<")"<<std::endl;
}



