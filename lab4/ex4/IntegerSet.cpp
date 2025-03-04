#include <iostream>
#include "IntegerSet.h"
using namespace std;
IntegerSet::IntegerSet()
{
}

IntegerSet IntegerSet::unionofSets(const IntegerSet &set2)
{
    IntegerSet UNION;
    for (int i = 0; i < 101; i++)
    {
        if (SET[i] == 1 || set2.SET[i] == 1)
            UNION.SET[i] = 1;
        else
            UNION.SET[i] = 0;
    }
    return UNION;
}

IntegerSet IntegerSet::intersectionofsets(const IntegerSet &set2)
{
    IntegerSet INTERSECTION;
    for (int i = 0; i < 101; i++)
    {
        if (SET[i] == 1 && set2.SET[i] == 1)
            INTERSECTION.SET[i] = 1;
        else
            INTERSECTION.SET[i] = 0;
    }
    return INTERSECTION;
}

void IntegerSet::insertElement(int k)
{
    if (k <= 100 && k >= 0)
        SET[k] = 1;
    else
        cout << " invalide " << '\n';
}
void IntegerSet::deleteElement(int k)
{
    k >= 0 && k <= 100 ? SET[k] = 0 : 0;
}

void IntegerSet::inputSet()
{
    int k;
    while (true)
    {
        cout << "Enter a number (0-100) or -1 to stop: ";
        cin >> k;
        if (k == -1)
            break;

        insertElement(k);
    }
}

void IntegerSet::printset() const
{
    int count = 0;
    for (int i = 0; i <= 101; i++)
    {
        if (SET[i] == 1)
        {
            cout << i << " ";
        }
        else
        {
            if (SET[i] == 0)
                count++;
        }
    }
    if (count == 101)
    {
        cout << "---" << endl;
    }
    cout << endl;
}

bool IntegerSet::isEqualTo(const IntegerSet &set2) const
{

    for (int i = 0; i < 101; i++)
    {
        if (SET[i] != set2.SET[i])
            return false;
    }
    return true;
}

