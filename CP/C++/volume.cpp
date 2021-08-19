#include<iostream>
using namespace std;

int main()
{
    double r,l;
    cout << "Enter radious of solid:";
    cin >> r;
    cout << "Enter side length of solid:";
    cin >> l;

    double ans= (22.00/7)*r*r*l;
    cout << endl;
    cout << "Volume of Solid is->" << ans <<endl;
}
