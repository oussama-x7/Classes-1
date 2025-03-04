#ifndef FILE_HPP
#define FILE_HPP
#include<iostream>

class realbankaccount
{

private:
    double balance;

public:
    realbankaccount(double x = 0 ){balance = x ;}
    void withdraw(double);
    double getbalance() const ; 
    void setvalue(double);
};
double realbankaccount::getbalance() const 
{
    return balance; 
}

void realbankaccount::withdraw(double x )
{
    if( x <= balance  )
    { 
        std::cout<<"seccesful operation "<<std::endl;
        balance-=x;
    }
    else 
    { 
        std::cout<<"your are poor hhh"<<std::endl;
    }
}
void realbankaccount::setvalue(double x )
{
    balance = x ;
}


#endif