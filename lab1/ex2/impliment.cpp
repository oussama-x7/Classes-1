#include<iostream>
#include "header2.h"
using namespace std;

// Constructor 
Complex::Complex(double real = 0.0 , double img = 0.0)
{
     Realpart = real;
     imaginarypart = img;

}

// setter 
void Complex::setComplexnumber(double x, double y)
{
    Realpart = x;
    imaginarypart = y;
}

// print function 
void Complex::printComplex() const 
{
    cout << "The complex number  in (a,b) format is  "<<"(" <<Realpart<< "," << imaginarypart<<")" << endl;
}

// Arithmitic function 
Complex Complex::addition(const Complex &number)

{   
    Complex result;

    result.Realpart = Realpart + number.Realpart;
    result.imaginarypart = imaginarypart + number.imaginarypart;

    Realpart = result.Realpart;
    imaginarypart = result.imaginarypart;

    return result;
}
Complex  Complex::substraction(const Complex &number)
{    
    Complex result;
    result.Realpart = Realpart + number.Realpart;
    result.imaginarypart = imaginarypart + number.imaginarypart;

    Realpart = result.Realpart;
    imaginarypart = result.imaginarypart;

    return result ;
}
Complex Complex::multiplication(const Complex &number)
{
     Complex result ;
result.Realpart = Realpart*number.Realpart - imaginarypart*number.imaginarypart;
    result.imaginarypart= Realpart*number.imaginarypart + imaginarypart*number.Realpart;
    Realpart = result.Realpart;
    imaginarypart = result.imaginarypart;

    return result;
}
