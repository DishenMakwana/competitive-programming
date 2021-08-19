#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double ny,amt,ir;

    cout << "Enter loan amount:";
    cin >> amt;
    cout << "Enter no. of years:";
    cin >> ny;
    cout << "Enter annual interest rate:";
    cin >> ir;

    double mir=ir/12;
    double mpy= (amt* ir/100 )/(1.00-(1.00/pow(1+ ir/100 ,ny*12)));
    double totalpy= mpy*12*ny;

    cout <<endl;
    cout << "Monthly interest rate is:" << mir << endl;
    cout << "Monthly payment:" << mpy << endl;
    cout << "Total payment:" << totalpy <<endl;
    return 0;
}
