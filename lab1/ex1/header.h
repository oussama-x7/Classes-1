#ifndef HEADER_H
#define HEADER_H
using namespace std;
class Rectangel
{

private:
    int Width;
    int Length;

public:
    void SetWidth(int width) ;
    int GetWidth() const;
    void SetLength(int length);
    int GetLength() const;
    int Area(int width, int length) const;
    int perimeter(int width, int length) const;
    void GetInfo() const;
    Rectangel()
    {
        Width = 0;
        Length = 0;
    }
    Rectangel(int width , int length)
    {
        Width = width;
        Length = length;
    }
    
    ~Rectangel()
    {
        cout << "This destroyed a rectangel object " << endl;
    }
};

class Complex
{
    
public:
    Complex(double real = 0.0, double imaginary = 0.0)
    {
        Realpart = real;
        imaginarypart = imaginary;
    }

    void addition(const Complex &number);
    void substraction(const Complex &number);
    void multiplication(const Complex &number);
    void printComplex();
    void setComplexnumber(double, double);

private:
    double Realpart;
    double imaginarypart;
};

#endif