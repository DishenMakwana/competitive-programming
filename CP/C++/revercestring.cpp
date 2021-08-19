#include<iostream>
#include<stack>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cout<<"Enter String:-> ";
    cin>>str;
    stack<char> s;
    int i;

    for(i=0;i<strlen(str);i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        cout<<endl<< s.top();
        s.pop();
    }
    return 0;
}
