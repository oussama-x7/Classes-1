
#include <iostream>
#include <string>
#include "test.h"
using namespace std;
float country::totalpopulation = 0;
int main()
{
    capital London("London", 9.54);
    country UK("United kingdom", 67.22, 224820, London);
    cout << "the total now is :" << country::gettotalpopulation() << " million " << endl;
    {
        capital ABU_Dhabi("Abu Dhabi", 1.54);
        country UAE("UAE", 10.8, 82880, ABU_Dhabi);
        cout << "the total now is :" << country::gettotalpopulation() << " million " << endl;
        capital ALGIERS("Algiers", 2.85);
        country ALGERIA("Algeria", 45.33, 2400000, ALGIERS);
        cout << "the total now is :" << country::gettotalpopulation() << "million " << endl;
    }
    capital Cairo;
    country Egypt;
    string name, c_name;
    float population, area, inhabitant;
    cout << "the name of the country is : ";
    cin >> name;
    cout << "the population of the country is ";
    cin >> population;
    cout << "the area of the country is : ";
    cin >> area;
    cout << "the capital if the country is : ";
    cin >> c_name;
    cout << "the population of the capital is : ";
    cin >> inhabitant;
    Cairo.setname(c_name);
    Cairo.setinhabitant(inhabitant);
    Egypt.setname(name);
    Egypt.setpopulation(population);

    Egypt.setarea(area);
    Egypt.setcapital(Cairo);
    cout << "the total now is :" << country::gettotalpopulation() << " million" << endl;

    return 0;
}

// output :
/*the total now is :67.22 million
the total now is :78.02 million
the total now is :123.35million
Algeria is destucted
UAE is destucted
the name of the country is : o
the population of the country is 105
the area of the country is : 9
the capital if the country is : o
the population of the capital is : 9
the total now is :172.22 million
o is destucted
United kingdom is destucted*/
