#include "bits/stdc++.h"
using namespace std;

class student
{
    string school;

public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "Default constructor" << endl;
    } // default constructor

    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } // copy constructor

    student(string n, int a, bool g)
    {
        cout << "Parameterised constructor" << endl;
        name = n;
        age = a;
        gender = g;
    } // parameterised constructor

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    // operator overloading
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }

    void print()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Gender = " << gender << endl;
    }

    void setSchool(string s)
    {
        school = s;
    }

    void getSchool()
    {
        cout << "School = " << school << endl;
    }
};

int32_t main()
{
    // student a;
    // a.name = "Dishen";
    // a.age = 21;
    // a.gender = "Male";

    // student a[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> a[i].name;
    //     cin >> a[i].age;
    //     cin >> a[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     a[i].print();
    // }

    // student s;
    // string ss;
    // cin >> ss;
    // s.setSchool(ss);
    // s.getSchool();

    student s("Dishen", 21, true);
    s.print();
    student b;
    b.print();
    student c = s;
    c.print();

    if (c == s)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    return 0;
}