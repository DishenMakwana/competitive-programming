#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
    char *str;
}Str;

Str operator +(Str &s1,Str &s2)
{
    Str s;
    s.str=(char *)malloc( strlen(s1.str) + strlen(s2.str) +1 );
    strcpy(s.str,s1.str);
    strcat(s.str,s2.str);
    return s;
}

int main()
{
    Str fn,ln,n;
    fn.str=strdup("Dishen");
    ln.str=strdup("Makwana");

    n=fn+ln;

    cout << "FN: " << fn.str << endl;
    cout << "LN: " << ln.str << endl;
    cout << "N: " << n.str << endl;
}
