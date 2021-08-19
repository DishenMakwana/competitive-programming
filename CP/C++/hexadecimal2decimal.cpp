#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hexadec2dec(char s[])
{
    int len=strlen(s);
    int base=1;
    int dec=0;
    for(int i=len-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            dec +=(s[i]-48)*base;
            base*=16;
        }
        else if(s[i]>='A' && s[i]<='F')
        {
            dec +=(s[i]-55)*base;
            base*=16;
        }
    }
    return dec;
}

int main()
{
    char str[100];
    cout << "Enter hexadecimal no.: " << endl;
    cin >> str;
    cout << endl << hexadec2dec(str) << endl;
    return 0;
}
