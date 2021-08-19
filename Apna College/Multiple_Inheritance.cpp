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

class B
{
public:
    void funcB()
    {
        cout << "func B" << endl;
    }
};

class C : public A, public B
{
};

int32_t main()
{
    C c;
    c.funcA();
    c.funcB();
    return 0;
}