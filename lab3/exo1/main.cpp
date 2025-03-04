#include <iostream>
#include "point.h"
using namespace std;
int main()
{
    Point A(3, 5), B(-10, 30);
    A.Print_Point();
    B.Print_Point();
    A.Translate(5.5, -12.5);
    A.Print_Point();
    cout << "The Distance between the two points is : " << A.Distance(B) <<" CM"<< endl;

    return 0;
}