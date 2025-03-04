#include "proxy.hpp"
#include "file.hpp"
#include<iostream>
using namespace std;
proxy::proxy(double x ) : ptr(new realbankaccount(x))
{
    
}
void proxy::setvalue(double x )
{
    ptr-> setvalue(x);
}
void proxy::withdraw(double x ) 
{
    int m;
     cout<<"enter your password " <<endl;
     cin>>m ;
     if ( m==123 )
     {
        ptr->withdraw(x);     
    }
    else 
    {
        cout<<"wrong password" ; 
    }
     
}







