#include <iostream>
#include "cats.h"
#include <string>
using namespace std;

int main()
{
    int numberOfCats;

    cout << "enter how much cat you want : " << endl;
    cin >> numberOfCats;

    if (numberOfCats > 7 || numberOfCats < 0)
        cout << "the number is invalide the max is 7 cats per room " << endl;

    cats **arr = new cats*[numberOfCats];

    for (int count = 0; count < numberOfCats; count++)
    {
        cout << "Press a key to add the next cat to the room." << endl;
        cin.get();

        arr[count] = new cats;

        arr[count]->print();
        check(numberOfCats, arr);
    }

    for (int count = 0; count < numberOfCats; count++)
    {
       
        delete arr[count];
        arr[count] = nullptr;
    }
    return 0;
}
