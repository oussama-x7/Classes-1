#ifndef POINT_H
#define POINT_H
class Point
{
private:
    double X;
    double Y;

public:
    // functions
    void Translate(double, double);
    double Distance(const Point &) const;

    void Print_Point() const;
    // setters
    void SetX(double);
    void SetY(double);

    // getters
    double GetY() const;
    double GetX() const;

    // constructor

    Point(double = 0.0, double = 0.0); 
};
#endif