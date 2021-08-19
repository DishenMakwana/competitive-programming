#include<iostream>
using namespace std;
class integer
{
 int m, n;
 public:
 integer(int x,int y)
 {
 m=x;
 n=y;
 cout<<"Constructor Called";
 }
 
 integer(integer &x)
 {
 m = x.m;
 n = x.n;
 cout<<"\nCopy Constructor Called"; 
 }
};
int main()
{
 integer i1(5,6);
 integer i2=i1; //invokes copy constructor 
 return 0;
}