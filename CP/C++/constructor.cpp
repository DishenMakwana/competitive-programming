/*#include<iostream>
using namespace std;
class sample
{
 int a;
 public:
 sample(){}
 sample(int x)
 {
 a=x;
 }
 void disp()
 {
 cout<<"The value of a="<<a;
 }
};
int main()
{
 int m=10;
 sample s;
 s = m; //basic to class type conversion
 s.disp();
 return 0;
}*/
  
  
#include<iostream>
using namespace std;
class invent2;

class invent1
{
 private:
 int code;
 int items;
 float price; 
 public:
 invent1()
 {
 cout<<"Default Constructor Is Called Of Invent : 1\n\a";
 }
 invent1(int a,int b,float c)
 {
 cout<<"Parameterized Constructor Is Called Of Invent : 1\n\a";
 code=a;
 items=b;
 price=c;
 }
 void putdata()
 {
 cout<<"Code : "<<code<<"\n";
 cout<<"Items : "<<items<<"\n";
 cout<<"Price : "<<price<<"\n";
 }
 int getcode()
 {
 return code;
 }
 int getitems()
 {
 return items;
 }
 float getprice()
 {
 return price;
 }
 operator float()
 {
 return (items*price); 
 }
};
class invent2
{
 private:
 int code;
 float value;
 public:
 invent2()
 {
 cout<<"Default Constructor Is Called of Invent : 2\n\a";
 code=0;
 value=0;
 }
 invent2(float x,float y)
 {
 cout<<"Parameterized Constructor Is Called of Invent ; 2\n\a";
 code=x;
 value=y;
 }
 void putdata()
 {
 cout<<"Code : "<<code<<"\n";
 cout<<"Value : "<<value<<"\n";
 }
 invent2(invent1 p)
 {
 code=p.getcode();
 value=p.getitems()*p.getprice();
 }
};
int main()
{
 invent1 s1(100,5,140.20);
 invent2 d1;
 float total_value;
 total_value = s1; //using operator function
 d1=s1; //using constructor
 
 cout<<"Product : Details-invent1 Type\n\a";
 s1.putdata();
 cout<<"\nStock Value\n\a";
 
 cout<<"Product : Details-invent2 Type\n\a";
 d1.putdata();
 return 0;
}
 