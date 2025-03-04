#include<iostream>
#include "Triangle.h"
using namespace std;
int main()
{
    Triangle T1(5.00,8.00,5.00);
    T1.printTriangleinfo();
    Triangle T2(3,12,4);
    T2.printTriangleinfo();
    Triangle T3;
    double  f,s,t;
    T3.GetSides(f,s,t);
    cout<<"the first side is : "<<f<<endl;
    cout<<"the second side is : "<<s<<endl;
    cout<<"the third side is : "<<t<<endl;


    
     double first , second , third ;
     
     cout<<"Enter  the first side : " <<endl; 
     cin>>first;
     cout<<"enter the second side : " <<endl;
     cin>>second;
     cout<<"enter the third side : "<<endl; 
     cin>>third ;
     T3.setAllSides(first,second,third);
     T3.printTriangleinfo();
     return 0;
}


