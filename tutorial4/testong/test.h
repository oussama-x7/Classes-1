#ifndef  TEST_H
#define TEST_H
using namespace std;
// class capital
class capital
{
private:
    string name;
    float inhabitant;

public:
    capital();
    capital(string, float);
    void printcapital() const;
    void setname(string);
    string getname() const;
    void setinhabitant(float);
    float getinhabitant() const;
};

// class country

class country
{
private:
    string name;
    float population;
    float area;
    capital capitalcity;
    static float totalpopulation;

public:
    // constructor
    country();
    country(string, float, float, const capital &);
    // setters
    void setname(string);
    void setpopulation(float);
    void setarea(float);
    void setcapital(const capital & ) ;
    // getters
    string getname() const;
    float getpopulation() const;
    float getarea() const;
    // print
    void print() const;
    // additional
    float density() const;
    // static functions 
    static float gettotalpopulation();
    static void bumbtotal(float);
    // destructor 
    ~country();
    
};
#endif