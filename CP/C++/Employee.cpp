#include<iostream>
using namespace std;

class Employee
{
    const string name;
    const string id;
    double sal;
public:
    Employee(string nm="Dishen",string i="180470107035",double salary=10000) : name(nm),id(i) {sal=salary;}
        string getname() const;
        string getid() const;
        double getsal() const;
        void setsal(double salary);
        void promote(double salary)
        { sal=salary; }
};

int main()
{
    Employee dishen("Dishen","007",50000);
}
