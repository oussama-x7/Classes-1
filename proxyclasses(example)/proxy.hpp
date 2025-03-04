#ifndef PROXY_HPP
#define PROXY_HPP
class realbankaccount;
class proxy{

    private : 
    realbankaccount * ptr ;
    int password ; 
    public : 
    proxy(double);
    void withdraw(double);
    double getbalance() const;
    void setvalue(double);

    ~proxy()
    {
        delete ptr;
        ptr = nullptr;
    }
};







#endif