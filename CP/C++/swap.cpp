#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a,b);
    cout << endl;
    cout << a << "\n"<< b;
    return 0;
}

void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
