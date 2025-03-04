#include <iostream>
using namespace std;
#include "Segment.h"

int main()
{

    Point first(Rational(4, 2), Rational(5, 6));
    cout << "your point coordinates are  : "; '\n';
    first.Print_p();
    '\n';

    Point second(Rational(3, 1), Rational(7, 3));
    cout << "your point coordinates are  : "; '\n';
    second.Print_p();
    '\n';

    Segment AB(first, second);
    AB.Print();

    return 0;
}