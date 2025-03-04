#include <iostream>
#include "proxy.hpp"

using namespace std;
int main()
{
    proxy me(6767);

   void (proxy::*ptr)(double) = &proxy::withdraw;
    (me.*ptr)(500);
    return 0;
}