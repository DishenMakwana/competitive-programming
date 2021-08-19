#include "bits/stdc++.h"
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    Complex(double r = 0.0, double i = 0.0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + i" << imag << endl;
    }
};

int32_t main()
{
    Complex c1(12.0, 7.0), c2(6.0, 7.0);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}