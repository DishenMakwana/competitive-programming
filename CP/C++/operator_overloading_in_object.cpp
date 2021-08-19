#include<iostream>
using namespace std;
class coordinate
{
 int x,y,z;
 public:
 coordinate()
 {
 x=y=z=0;
 }
 coordinate(int a,int b,int c)
 {
 x=a;
 y=b;
 z=c;
 }
 void display()
 {
 cout<<"\nx="<<x<<endl;
 cout<<"y="<<y<<endl;
 cout<<"z="<<z<<endl;
 }
 void operator++();
 void operator +=(coordinate);
 int operator==(coordinate); 
};
int coordinate::operator ==(coordinate c)
{
 if(x==c.x && y==c.y && z==c.z)
 return 1;
 else
 return 0;
}
void coordinate::operator +=(coordinate c)
{
 coordinate tmp;
 x = x + c.x;
 y = y + c.y;
 z = z + c.z;
}
void coordinate::operator++()
{
 x++;
 y++;
 z++;
}

int main()
{
 coordinate c1(7,9,4),c2(5,11,3),c3;
 
 cout<<"Values of object 1 and 2";
 c1.display();
 c2.display();
 
 cout<<"After calling ==\n";
 if(c1==c2)
 cout<<"objects are equal\n";
 else
 cout<<"objects are not equal\n";
 
 cout<<"\nAfter calling +=";
 c3+=c1;
 c3.display();
 
 cout<<"\nAfter calling ++";
 ++c1;
 c1.display();
 
 return 0;
}