#include <iostream>
#include "header.h"
using namespace std;
int main()
{
    Rectangel Shape1, Shape2;
    Shape1.SetWidth(5);
    Shape1.SetLength(4);
    Shape1.Area(Shape1.GetLength(), Shape1.GetWidth());
    Shape1.perimeter(Shape1.GetLength(), Shape1.GetWidth());
    Shape1.GetInfo();
    Shape2.SetWidth(8);
    Shape2.SetLength(6);
    Shape1.Area(Shape2.GetLength(), Shape2.GetWidth());
    Shape1.perimeter(Shape2.GetLength(), Shape2.GetWidth());
    Shape2.GetInfo();

    cout << '\n';

    // Array of Objects




    Rectangel Array[] = {Rectangel(5, 4), Rectangel(5, 6), Rectangel(6, 5), Rectangel(6, 3)};
    
    
    
    for (int i = 0; i < 4; i++)
    {
        Array[i].GetInfo();
        cout << '\n';
    }
    // using pointers

    Rectangel *ptr = &Shape2;
    ptr->SetLength(7);
    ptr->SetWidth(9);
    ptr->GetInfo();

    return 0;
}
