// enumeraation in c++
#ifndef CATS_H
#define CATS_H
#include <string>
using namespace std;

class cats
{
public:
    string get_eye_Colour() const;
    string get_Fur_Colour() const;
    string get_hair_length() const;
    void print() const;
    cats();
    ~cats();


private:
    string Fur_Colour;
    string eye_Colour;
    string hair_length;
    void set_Fur_Colour();
    void set_hair_length();
    void set_eye_Colour();
};
void check(int, cats *[]);
#endif
