#ifndef LAB_DATE_H
#define LAB_DATE_H
class Date
{
public:
    // constructor
    Date(int month = 1, int day = 1, int year = 1998);
    // others
    void print();
    void nextDay();
    // getters
    int getday();
    int getmonth();
    int getyear();
    // setters
    void setyear(int);
    void setmonth(int);
    void setday(int);

    // destructor
    ~Date();

private:
    // other functions
    int monthDays();
    int isLeapYear();
    int month;
    int day;
    int year;
};

#endif