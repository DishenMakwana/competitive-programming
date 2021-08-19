#include<iostream>
using namespace std;
void swapptr(int *, int *);
void swapref(int &, int &);
int main()
{
 int a = 45;
 int b = 35;
 cout<<"Before Swap\n";
 cout<<"a="<<a<<" b="<<b<<"\n";
 swapptr(&a,&b);
 cout<<"After Swap with pass by pointer\n";
 cout<<"a="<<a<<" b="<<b<<"\n";
 swapref(a,b);
 cout<<"After Swap with pass by reference\n";
 cout<<"a="<<a<<" b="<<b<<"\n";
 return 0;
}
void swapptr(int *x, int *y)
{
 int z = *x;
 *x=*y;
 *y=z;
}
void swapref(int &x, int &y)
{
 int z = x;
 x = y;
 y = z;
}