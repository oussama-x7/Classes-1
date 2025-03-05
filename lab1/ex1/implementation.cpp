#include <iostream>
#include "header.h"
using namespace std;
void Rectangel::SetWidth(int width)
{
    Width = width;
}
void Rectangel::SetLength(int length)
{
    Length = length;
}
int Rectangel::GetWidth() const 
{
    return Width;
}
int Rectangel::GetLength() const 
{
    return Length;
}
int Rectangel::Area(int width, int length) const 
{
    return width * length;
}
int Rectangel::perimeter(int width, int length) const 
{
    return 2 * (width + length);
}
void Rectangel::GetInfo() const
{
    cout << "the Width   " << "is : " << GetWidth() << endl;
    cout << "the Length " << "is : " << GetLength() << endl;
    cout << "the Area   " << "is : " << Area(GetWidth(), GetLength()) << endl;
    cout << "the perimeter  " << "is : " << perimeter(GetWidth(), GetLength()) << endl;
}

