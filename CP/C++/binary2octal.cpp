#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int bin2oct(long bin)
{
    int oct=0,dec=0,i=0,rem;
    while(bin!=0)
    {
        rem=bin%10;
        int res = rem*pow(2,i++);
        dec+=res;
        bin/=10;
    }
    i=1;
    while(dec!=0)
    {
        rem=dec%8;
        oct+=rem*i;
        dec/=8;
        i*=10;
    }
    return oct;
}

int main()
{
    long b;
    cout << "Enter Binary no.: ";
    cin >> b;
    int o=bin2oct(b);
    cout << endl;
    cout << b << " in binary = " << o << " in octal !";
    return 0;
}
