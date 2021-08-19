#include "bits/stdc++.h"
using namespace std;

class ApnaCollege
{
public:
    void fun()
    {
        cout << "Fun with no arguments" << endl;
    }
    void fun(int n)
    {
        cout << "Fun with int arguments" << endl;
    }
    void fun(double n)
    {
        cout << "Fun with double arguments" << endl;
    }
};

int32_t
main()
{
    ApnaCollege ac;
    ac.fun();
    ac.fun(2);
    ac.fun(2.2);
    return 0;
}