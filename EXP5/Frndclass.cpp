#include<iostream>
using namespace std;

class Value;

class Data
{
    int c, d;

public:
    Data()
    {
        c = 10;
        d = 5;
    }
    friend class Value;
};

class Value
{
    int a, b;

public:
    Value()
    {
        a = 9;
        b = 11;
    }
    friend class Data;

    int add()
    {
        Data e;
        return e.c + a;
    }

    int mult()
    {
        Data e;
        return e.d * b;
    }
};

int main()
{
    Value f;
    cout << "sum: " << f.add();
    cout << "\nmultiplication: " << f.mult()<<"\n";
    return 0;
}
