#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    virtual void print() // virtual keyword used for function overriding
    {
        cout << "This is the base class Print fun" << endl;
    }

    void display()
    {
        cout << "This is the base class Display fun" << endl;
    }
};

class B : public A
{
public:
    void print()
    {
        cout << "This is the derived class Print fun" << endl;
    }

    void display()
    {
        cout << "This is the derived class Display fun" << endl;
    }
};

int32_t main()
{
    A *a;
    B b;
    a = &b; // store derived class address in base class pointer

    a->print();
    a->display();
    return 0;
}