#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

class String
{
public:
    char *str;
    size_t len_;
public:
    String (char *s): str(strdup(s)),len_(strlen(str))
    {
        /*cout << "Ctor : " ;
        print();*/
    }
    String(const String &s) : str(strdup(s.str)),len_(s.len_)
    {

    }
    ~String()
    {
        free(str);
    }
    void print()
    {
        cout << str << ":" << len_ << endl;
    }
    size_t len()
    {
        return len_;
    }
    String & operator=(const String &s)
    {
        if(this!=&s)
        {
            free(str);
            str=strdup(s.str);
            len_=s.len_;
        }
        return *this;
    }
};

/*void UPPER(String a)
{
    for(int i=0;i<a.len_;i++)
        a.str[i]=toupper(a.str[i]);

    cout << "StringUPPER: "; a.print();
}*/

int main()
{
    /*String s="dishen";
    s.print();
    UPPER(s);
    s.print();*/
    String s1="FootBall",s2="Cricket";
    s1.print(); s2.print();
    s1=s1; s1.print();

    return 0;
}
