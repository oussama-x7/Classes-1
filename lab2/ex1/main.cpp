#include <iostream>
#include "lab_date.h"
using namespace std;
int main()
{
    // Date date1( 6 , 6 , 2006);
    // for(int i = 0 ; i < 30 ; i++)
    //{
    //     date1.nextDay();
    //     date1.print();cout<<'\n';
    // }
    // Date date2(11,11,2011);
    // for (int j=0 ; j<200 ; j++)
    //{
    //     date2.print();cout<<'\n';
    //     date2.nextDay();
    // }
    // Date date2(4, 2, 2012);
    // cout << "the days are " << date2.monthDays() << endl;
    const int MAXDAYS = 560;
    Date date1(1, 1, 1999), date2; 
    cout << "date1 = ";
    date1.print();
    cout << "\ndate2 = ";
    date2.print();
    cout << endl;

    for (int loop = 1; loop <= MAXDAYS; ++loop)
    {
        date1.nextDay();
        date1.print();cout<<'\n';
    }

    return 0;
}