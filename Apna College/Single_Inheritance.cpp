#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void func()
    {
        cout << "func A" << endl;
    }
};

class B : public A
{
};

int32_t main()
{
    B b;
    b.func();

    // parent p = new child();
    A &a = b;
    a.func();

    // A aa;
    // B &bb = aa;
    // bb.func();
    return 0;
}