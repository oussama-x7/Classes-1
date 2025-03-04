#include <iostream>
#include "IntegerSet.h"

using namespace std;

int main() {
    IntegerSet set1, set2, resultSet;

    cout << "Enter elements for Set 1:" << endl;
    set1.inputSet();
    
    cout << "Enter elements for Set 2:" << endl;
    set2.inputSet();

    
    cout << "Set 1: ";
    set1.printset();
    cout << "Set 2: ";
    set2.printset();

    
    resultSet = set1.unionofSets(set2);
    cout << "Union of sets: ";
    resultSet.printset();

   
    resultSet = set1.intersectionofsets(set2);
    cout << "Intersection of sets: ";
    resultSet.printset();

   
    cout << "Inserting 5 in Set 1..." << endl;
    set1.insertElement(5);
    set1.printset();

  
    cout << "Deleting 5 from Set 2..." << endl;
    set2.deleteElement(5);
    set2.printset();

    
    if (set1.isEqualTo(set2))
        cout << "Set 1 and Set 2 are equal." << endl;
    else
        cout << "Set 1 and Set 2 are NOT equal." << endl;

    return 0;
}
