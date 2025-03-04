#include <iostream>
#include <string>
#include <list>
using namespace std;
struct youtube
{
    string name;
    int subscrinbecount;
    youtube(string name, int sub)
    {
        this->name = name;
        this->subscrinbecount = sub;
    }
    bool operator==(const youtube &channel)
    {
        return this->name == channel.name;
    }
};
ostream &operator<<(ostream &output, const youtube &channel)
{
    output << " the name is : " << channel.name
           << " the subscribed count is : " << channel.subscrinbecount
           << " this is your channel " << endl;
    return output;
}

class myclass
{
public:
    list<youtube> mychannels;
    void operator+=(const youtube &channel)
    {
        this->mychannels.push_back(channel);
    }

    void operator-=(const youtube &channel)
    {
        this->mychannels.remove(channel);
    }
};
ostream &operator<<(ostream &output, const myclass &m4)
{
    output << " The  elements in the list are  : " << endl;
    for (youtube channel : m4.mychannels)
    {
        output << channel << endl;
    }
    return output;
}
int main()
{

    youtube channel1("oussama", 5000);
    youtube channel2("rami ", 7000);
    myclass my;

    my += channel1;
    my += channel2;
    cout << my;
    my -= channel2;

    cout << my;
    '\n';

    return 0;
}