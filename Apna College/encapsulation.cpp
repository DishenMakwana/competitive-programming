#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    int a;
    void funA()
    {
        cout << "Func A" << endl;
    }

private:
    int b;
    void funB()
    {
        cout << "Func B" << endl;
    }

protected:
    int c;
    void funC()
    {
        cout << "Func C" << endl;
    }
};

int32_t main()
{
    A objA;
    objA.funA();
    

    return 0;
}