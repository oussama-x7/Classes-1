#ifndef POINT_H
#define POINT_H
class Point
{

public:
    Point(int = 0, int = 0);
    friend void Display_Point(const  Point & );

private:
    int x, y;
};

#endif