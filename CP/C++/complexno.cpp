#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
private:
    double re_,im_;

public:
    Complex(double re=0.0,double im=0.0):
        re_(re), im_(im)
        {
            cout << "Ctor: (" << re_ << "," << im_ << ")" <<endl;
        }
        Complex(const Complex &c) : re_(c.re_),im_(c.im_)
        {
            cout << "Complex copy Ctor:"; print();
        }
    double norm()
    {
        return sqrt(re_*re_ + im_*im_);
    }
    void print()
    {
        cout <<endl<< "Real Value :" << endl << " |" << re_ << "+j" << im_ << "| = "  << norm() << endl;
    }
    ~Complex()
    {
        cout << "Dtor: (" << re_ << "," << im_ << ")" <<endl;
    }
};

int main()
{
    double a,b;
    Complex c(4.2,5.3),d(4.2),c2(c),c3=c2;
    cout << "enter values:"<<endl;
    cin >> a >> b;
    Complex e(a,b);
    c.print();
    d.print();
    e.print();
    c2.print();
    c3.print();

    return 0;
}
