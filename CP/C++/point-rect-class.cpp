#include<iostream>
using namespace std;

class Point
{
    int x_;
    int y_;
public:
    Point (int x,int y): x_(x),y_(y)
    {
        cout << "Point ctor:";
        print();  cout<<endl;
    }
    Point(): x_(0),y_(0)
    {
        cout << "Point ctor:";
        print();  cout<<endl;
    }
    Point(const Point &p) : x_(p.x_),y_(p.y_)
    {
        cout << "Point copyctor:";
        print();  cout<<endl;
    }
    ~Point()
    {
        cout << "Point Dtor:" ;
        print();  cout<<endl;
    }
    void print()
    {
        cout << "(" << x_ << ", " << y_ << ")" ;
    }
};

class Rect
{
    Point TL;
    Point BR;
public:
    Rect (int tlx,int tly,int brx,int bry): TL(tlx,tly),BR(brx,bry)
    {
        cout << "Rect Ctor:";
        print(); cout<<endl;
    }
    Rect(const Point &p_tl,const Point &p_br): TL(p_tl),BR(p_br)
    {
        cout << "Rect Ctor:";
        print(); cout<<endl;
    }
    Rect(const Point &p_tl,int brx,int bry): TL(p_tl),BR(brx,bry)
    {
        cout << "Rect Ctor:";
        print(); cout<<endl;
    }
    Rect()
    {
        cout << "Rect Ctor:";
        print(); cout<<endl;
    }
    Rect(const Rect &r): TL(r.TL),BR(r.BR)
    {
        cout << "Rect CopyCtor:";
        print(); cout<<endl;
    }
    ~Rect()
    {
        cout << "Rect Dtor:";
        print(); cout<<endl;
    }
    void print()
    {
        cout << "["; TL.print();
        cout << " "; BR.print(); cout << "]"<<endl;
    }
};

int main()
{
    Rect r(0,2,5,7);
    cout<<endl;
    r.print();
    cout <<endl;
    cout <<endl;
    return 0;
}
