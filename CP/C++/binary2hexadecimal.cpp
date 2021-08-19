#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

void bin2hxdec(long bin)
{
    int oct=0,hxdec=0,i=0,rem;
    while(bin!=0)
    {
        rem=bin%10;
        int res = rem*pow(2,i++);
        hxdec+=res;
        bin/=10;
    }
    i=0;
    char str[100];
    while(hxdec!=0)
    {
        int temp=0;
        temp=hxdec%16;
        if(temp<10)
        {
            str[i++]=temp+48;
        }
        else
        {
            str[i++]=temp+55;
        }
        hxdec=hxdec/16;
    }
    cout << endl;
    for(int j=i-1;j>=0;j--)
        cout << str[j];
}

int main()
{
    long b;
    cout << "Enter Binary no.: ";
    cin >> b;
    bin2hxdec(b);
    return 0;
}
