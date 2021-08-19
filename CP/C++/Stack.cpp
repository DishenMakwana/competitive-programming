#include "Stack.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    Stack s;
    char str[100];
    cout << "Enter String: " <<endl;
    cin >> str;

    for(int i=0;i<strlen(str);i++)
        s.push(str[i]);

    cout << endl << "Reverce String: " <<endl;
    while(!s.empty())
    {
        cout << s.peek();
        s.pop();
    }
    return 0;
}
