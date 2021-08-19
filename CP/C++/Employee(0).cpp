#include<iostream>
using namespace std;
class Item
{
 protected:
 int Itemcode;
 char Itemname[50];
 float Cost,Discount;
 public:
 void getData()
 {
 cout<<"Enter Item code:";
 cin>>Itemcode;
 cout<<"Enter Item name:";
 cin>>Itemname;
 cout<<"Enter Cost:";
 cin>>Cost;
 cout<<"Enter Discount:";
 cin>>Discount;
 }
};
class Employee:public Item
{
 private:
 char Emp_name[50];
 int Emp_code;
 float amount;
 public:
 Employee()
 {
 cout<<"Enter Employee name:";
 cin>>Emp_name;
 cout<<"Enter Employee code:";
 cin>>Emp_code;
 }
 void display();
 void calculate();
};
class Customer:public Item
{
 private:
 char Cus_name[50];
 float amount;
 public:
 Customer()
 {
 cout<<"\nEnter customer name:";
 cin>>Cus_name;
 }
 void display();
 void calculate();
};
void Employee::display()
{
 cout<<"\nEmployee name:"<<Emp_name<<endl;
 cout<<"Employee code:"<<Emp_code<<endl;
 cout<<"Item code:"<<Itemcode<<endl;
 cout<<"Item name:"<<Itemname<<endl;
 cout<<"Cost:"<<Cost<<endl;
 cout<<"Discount:"<<Discount<<endl;
 cout<<"Amount to be paid:"<<amount<<endl;
}
void Employee::calculate()
{
 amount=Cost-Discount;
}
void Customer::calculate()
{
 amount=Cost-Discount;
}
void Customer::display()
{
 cout<<"\nCustomer name:"<<Cus_name<<endl;
 cout<<"Item code:"<<Itemcode<<endl;
 cout<<"Item name:"<<Itemname<<endl;
 cout<<"Cost:"<<Cost<<endl;
 cout<<"Discount:"<<Discount<<endl;
 cout<<"Amount to be paid:"<<amount<<endl;
}
int main()
{
 Employee E1;
 E1.getData();
 E1.calculate();
 E1.display();
 Customer C1;
 C1.getData();
 C1.calculate();
 C1.display();
 return 0;
 }