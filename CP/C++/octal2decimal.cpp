#include<iostream>
using namespace std;

int bin2dec(int n)
{
    int num=n;
    int d=0;
    int i=1;
    int t=num;
    while(t)
    {
        int ld=t%10;
        t=t/10;

        d = d + (ld*i);
        i=i*8;
    }
    return d;
}
int main()
{
    int n;
    cout << "Enter Octal no.";
    cin >> n ;
    cout << bin2dec(n) << endl;
    return 0;
}
