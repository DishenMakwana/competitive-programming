#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "func A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "func B" << endl;
    }
};

class C
{
public:
    void funcC()
    {
        cout << "func C" << endl;
    }
};

class D : public B, public C
{
public:
    void funcD()
    {
        cout << "func D" << endl;
    }
};

int32_t main()
{
    D d;
    d.funcA();
    d.funcB();
    d.funcC();
    d.funcD();
    return 0;
}