#include<iostream>
using namespace std;
class A
{
 public:
 virtual void show()
 {
 cout<<"Hello base class" << endl;
 }
};
class B : public A
{
 public:
 void show()
 {
 cout<<"Hello derive class" << endl;
 }
};
int main()
{
 A aobj;
 B bobj;
 A *bptr;
 bptr=&aobj;
 bptr->show(); // call base class function
 
 bptr=&bobj;
 bptr->show(); // call derive class function
}

/*
#include<iostream>
using namespace std;
class Base
{
 public:
 virtual void display()
 {
 cout<<"Base class"<<endl;
 }
};
class Derived : public Base
{
 public:
 void display()
 {
 cout<<"Derived class"<<endl;
 }
};
int main()
{
 Base b,*bptr;
 Derived d,*dptr;
 
 bptr = &b;
 bptr->display(); //Base Class
 
 dptr = &d;
 dptr->display (); //Derive Class 
 
 bptr=&d;
 bptr->display(); //Derive Class
 return 0;
}
*/