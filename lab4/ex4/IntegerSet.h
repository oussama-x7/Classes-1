#ifndef INTEGERSET_H
#define INTEGERSET_H
class IntegerSet
{
private:
    int SET[101] = {0};

public:
    IntegerSet();
    IntegerSet unionofSets(const IntegerSet & );
    IntegerSet intersectionofsets( const IntegerSet & );
    void insertElement(int);
    void deleteElement(int);
    void inputSet();
    void printset() const;
    bool isEqualTo(const IntegerSet & ) const;
};
#endif