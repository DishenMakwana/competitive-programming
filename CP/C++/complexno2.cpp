#include<iostream>
#include<cmath>
using namespace std;

class Complex
{
private:
    double re_,im_;

public:
    Complex(double re=0.0,double im=0.0): re_(re), im_(im)
    {
        //cout << "Ctor: (" << re_ << "," << im_ << ")" <<endl;
    }
    Complex(const Complex &c) : re_(c.re_),im_(c.im_)
    {
       // cout << "Complex copy Ctor:"; print();
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
    Complex &operator=(const Complex &c)
    {
        if(this!=&c)
        {
            re_=c.re_;
            im_=c.im_;
            cout << endl << endl << "Copy: ";
            print();
        }
        return *this;
    }
};
void Display(Complex c_par)
{
    cout << "Display :"; c_par.print();
}

int main()
{
    double a,b;
    /*Complex c(4.2,5.3),d(4.2),c2(c),c3=c2;
    cout << "enter values:"<<endl;
    cin >> a >> b;
    Complex e(a,b);
    c.print();
    d.print();
    e.print();
    c2.print();
    c3.print();
    Display(c);
*/
    Complex c1(4.2,5.3),c2(7.9,5.5),c3(c2);
    //c1.print(); c2.print(); c3.print();
    //c2=c1; c2.print();
    c3=c1=c3;
    c3.print(); //c2.print(); c3.print();
    cout << endl;
    cout << endl;

    return 0;
}

