#include<iostream>
using namespace std;
class Time
{
 int hours,minutes,seconds;
 public:
 Time()
 {
 hours=0;
 minutes=0;
 seconds=0;
 }
 
 void getTime();
 Time operator+(Time);
 void display();
};
void Time :: getTime()
{
 cout<<"Enter Hour(0-11):";
 cin>>hours;
 cout<<"Enter Minutes(0-59):";
 cin>>minutes;
 cout<<"Enter Seconds(0-59):";
 cin>>seconds;
}
Time Time :: operator+(Time t)
{
 Time temp;
 int a,b;
 
 b=seconds + t.seconds;
 temp.seconds=b%60;
 
 a=(b/60)+minutes + t.minutes;
 temp.minutes=a%60;
 
 temp.hours=(a/60)+hours + t.hours;
 
 return temp; 
}
void Time :: display()
{
 cout<<endl<<"Time: "<<hours<<":"<<minutes<<":"<<seconds;
}
int main()
{
 Time t1,t2,t3;
 
 cout<<endl<<"Enter First Time: "<<endl;
 t1.getTime();
 cout<<endl<<"Enter Second Time"<<endl;
 t2.getTime();
 
 t3=t1+t2;
 t1.display();
 t2.display();
 t3.display();
 return 0;
}