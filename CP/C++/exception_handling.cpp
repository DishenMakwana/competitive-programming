#include<iostream>
using namespace std;
void test(int x)
{
 try
 {
 if(x==1)
 throw x;
 
 else if(x==0)
 throw 'x';
 
 else if(x==-1)
 throw 5.14;
 }
 catch(int i)
 {
 cout<<"\nCaught an integer";
 }
 catch(char ch)
 {
 cout<<"\nCaught a character";
 }
 catch(double i)
 {
 cout<<"\nCaught a double";
 }
};
int main()
{
 test(1);
 test(0);
 test(-1);
}
/*
#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 
 cout<<"Enter value a=";
 cin>>a;
 cout<<"Enter value b=";
 cin>>b;
 try
 {
 if(b!=0)
 {
 c=a/b;
 cout<<"answer="<<c;
 }
 else
 {
 throw(b);
 }
 }
 catch(int x)
 {
 cout<<"Exception caught: Divide by zero\n";
 } 
}
*/
  
  
/*
  #include<iostream>
using namespace std;
int main()
{
 int a=1;
 
 try
 {
 try
 {
 throw a;
 }
 catch(int x)
 {
 cout<<"\nException in inner try-catch block.";
 throw;
 }
 }
 catch(int n)
 {
 cout<<"\nException in outer try-catch block.";
 }
 cout<<"\nEnd of program.";
 return 0;
}
*/