#include<iostream>
using namespace std;

typedef struct node
{
    int temp;
}t;

t operator+(t &a,t &b)
{
    t ua=a,ub=b;
    t tb= (ua+ub);
    return (t) tb;
}

int main()
{
    t a,b,x;
    a.temp=10;
    b.temp=20;
    x = a + b;
    cout << x << endl;
    return 0;
}
