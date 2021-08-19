#include<iostream>
using namespace std;

int main()
{
    char buf[sizeof(int)*2];
    int *p=new(buf)int(10);
    int *q=new(buf+sizeof(int))int(20);
    cout <<" "<<p<<endl<< " "<<q<<endl;
    cout <<*p << "       "<<*q<<endl;
    int *r=new int(7);
    cout << *r<<endl;
    delete r;
    return 0;
}
