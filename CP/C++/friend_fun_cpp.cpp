#include <iostream>
using namespace std;

class Y;
class X {
 private:
 int x;
 public:
 X(int a)
 {
 x=a;
 }
 // friend function declaration
 friend int multiply(X, Y);
};
class Y {
 private:
 int y;
 public:
 Y(int b)
 {
 y=b;
 }
 // friend function declaration
 friend int multiply(X, Y);
};
// Function multiply() is the friend function of classes X and Y
// that accesses the member variables x and y
int multiply(X objectX, Y objectY)
{
 return (objectX.x + objectY.y);
}
int main()
{
 X objectX(10);
 Y objectY(20);
 cout<<"Multiplication: "<< multiply(objectX, objectY);
 return 0;
}


/*
  #include <iostream>
using namespace std;
// forward declaration
class B;
class A {
 private:
 int x;
 public:
 A()
 {
 x=12;
 }
 // friend function declaration
 friend int sum(A, B);
};
class B {
 private:
 int y;
 public:
 B()
 {
 y=12;
 }
 // friend function declaration
 friend int sum(A, B);
};
// Function sum() is the friend function of classes A and B
// that accesses the member variables x and y
int sum(A objectA, B objectB)
{
 return (objectA.x + objectB.y);
}
int main()
{
 A objectA;
 B objectB;
 cout<<"Sum: "<< sum(objectA, objectB);
 return 0;
}
*/