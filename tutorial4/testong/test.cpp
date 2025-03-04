#include <iostream>
#include "test.h"
using namespace std;

// class capital
capital::capital(){
  name ="void";
  inhabitant = 0.0; 
}
capital::capital(string name, float inhabitant)
{
  setname(name);
  setinhabitant(inhabitant);
}

void capital::printcapital() const
{
  cout << "The capital of this country is : " << getname() << endl;
  cout << "This capital has a total population of " << getinhabitant() << " milloin" << endl;
}

void capital::setname(string name)
{
  this->name = name;
}

void capital::setinhabitant(float inhabitant)
{
  this->inhabitant = inhabitant;
}

string capital::getname() const
{

  return name;
}
float capital::getinhabitant() const
{

  return inhabitant;
}

// class country

// constructor
country::country(){}
country::country(string name ="void", float population=0.0, float area=0.0, const capital & capitalcity =  capital()) :capitalcity(capitalcity)
{
  setname(name);
  setpopulation(population);
  setarea(area);
  
}
// setters

void country::setname(string name)
{
  this->name = name;
}
void country::setpopulation(float population)
{
  
population >= 0 ? this->population = population : population = 0;
totalpopulation += population;
  
}
void country::setarea(float area)
{
  area >= 0 ? this->area = area : area = 0;
}

void country::setcapital(const capital & cp)
{
  capitalcity = cp ;
}
// getters

string country::getname() const
{
  return name;
}
float country::getpopulation() const
{
  return population;
}
float country::getarea() const
{
  return area;
}

// print
void country::print() const
{
  cout << "The country is : " << getname() << endl;
  capitalcity.printcapital();
  cout << "The population of this country is " << getpopulation() << " Million p " << endl;
  cout << "the area of this country is " << getarea() << " Square kilometer " << endl;
  cout << "the density in this country is : " << density() << " million per kilometer " << endl;
}

// additional

float country::density() const
{
  return (population / area);
}

float country::gettotalpopulation() 
{
  return totalpopulation;
}
void country::bumbtotal(float add )
{
  totalpopulation+=add;
}
//destructor 
country::~country()
{
  cout<<name<<" is destucted "<<endl;
  totalpopulation = totalpopulation - population ;
}