#include<iostream>
using namespace std;
class complex
{
 int real,imag;
 public:
 complex()
 {
 real=0;
 imag=0;
 }
 complex(int x,int y)
 {
 real=x;
 imag=y;
 }
 void disp()
 {
 cout<<real<<" + "<<imag<<"i"<<endl;
 }
 complex operator + (complex);
};
complex complex::operator + (complex c)
{
 complex tmp;
 tmp.real = real + c.real;
 tmp.imag = imag + c.imag;
 return tmp;
}
int main()
{
 complex c1(4,6),c2(7,9),c3;
 c3 = c1 + c2;
 c1.disp(); 
 c2.disp();
 c3.disp(); 
 return 0;
}
/*
Output:
4 + 6i
7 + 9i
11 + 15i
*/