#include<iostream>
using namespace std;

int init_m1(int m)
{
    cout << "Init m1=" << m <<endl;
    return m;
}
int init_m2(int m)
{
    cout << "Init m2=" << m <<endl;
    return m;
}

class X
{
    int m1_; //int m2_;
    int m2_; //int m1_;
public:
    X(int m1,int m2):
        m1_(init_m1(m1)),m2_(init_m2(m2))
        {
            cout << "Ctor :" << endl;
        }
    ~X()
    {
        cout << "Dtor :" <<endl;
    }

};

int main()
{
    X a(2,3);
    return 0;
}
