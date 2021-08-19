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
    ~Complex()
    {
        cout << "Dtor: (" << re_ << "," << im_ << ")" <<endl;
    }
    void opComplex(double i)
    {
        re_ +=i;
        im_+=i;
    }
    double norm()
    {
        return sqrt(re_*re_ + im_*im_);
    }
    void print()
    {
        cout <<endl<< "Real Value :" << endl << " |" << re_ << "+j" << im_ << "| = "  << norm() << endl;
    }

};
Complex d(5.0,10.0);

int main()
{
    unsigned char buf[100];
    Complex *pc=new Complex(4.2,5.3);
    Complex *pd=new Complex[2];
    Complex *pe=new(buf)Complex(2.6,3.9);
    d.print();
    for(int i=0;i<2;i++)
    {
        pd[i].opComplex(i);
        pd[i].print();
    }
    pc->print();
    pe->print();
    cout << endl;

    //Delete
    delete []pd;
    delete pc;
    pe->~Complex();
    return 0;
}

