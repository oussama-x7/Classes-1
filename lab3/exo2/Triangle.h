#ifndef Trianlge_H
#define Trianlge_H

class Triangle
{
private:
    double firstSide;
    double secondSide;
    double thirdSide;
    bool TriangleIsValid() const;
    std::string Type() const;

public:
    // const
    Triangle(double = 0.0, double = 0.0, double = 0.0);

    // functions
    void GetSides(double &, double &, double &);
    double getPerimeter() const;
    double getArea() const;
    void setAllSides(double, double, double);
    void printTriangleinfo() const;
};
#endif