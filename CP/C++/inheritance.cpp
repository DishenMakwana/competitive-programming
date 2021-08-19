#include<iostream>
using namespace std;
class student
{
 char name[20];
 int en_no;
 public:
 student()
 {
 cout<<"enter name of student:";
 cin>>name;
 cout<<"enter enroll no of student:";
 cin>>en_no;
 }
 char get_n()
 {
 return *name;
 }
 int get_en()
 {
 return en_no;
 }
};
class university
{
 int un_mark;
 public:
 university()
 {
 cout<<"enter marks acquired in university:";
 cin>>un_mark;
 }
 int get_u_m()
 {
 return un_mark;
 }
};
class internal : virtual public student
{
 int int_mark;
 public:
 internal()
 {
 cout<<"enter internal marks:";
 cin>>int_mark;
 }
 int get_in_m()
 {
 return int_mark;
 }
};
class external : virtual public student
{
 int ext_mark;
 public:
 external()
 {
 cout<<"enter marks got in external:";
 cin>>ext_mark;
 }
 int get_ext_m()
 {
 return ext_mark;
 }
};
class result:public university,public internal,public external
{
 public: 
 void display()
 {
 cout<<"\n name of student is:"<<get_n();
 cout<<"\n enroll no is:"<<get_en();
 cout<<"\n marks got in internal is:"<<get_in_m();
 cout<<"\n marks got in external is:"<<get_ext_m();
 cout<<"\n marks got in university is:"<<get_u_m();
 }
};
int main()
{
 result r;
 r.display();
 return 0;
}