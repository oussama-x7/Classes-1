#ifndef HEADER2_H
#define HEADER2_H
using namespace std;
class Complex
{
private:
    double Realpart;
    double imaginarypart;

public:
    // Construtor 
    Complex(double,double);
    
    // Arithmitic function 
    Complex addition(const Complex &);
    Complex substraction(const Complex &);
    Complex multiplication(const Complex &);

    // Print function
    void printComplex() const;
    // setter
    void setComplexnumber(double, double);
};

#endif