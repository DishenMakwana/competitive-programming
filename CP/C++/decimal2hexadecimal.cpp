#include<iostream>
using namespace std;

void dec2hexadec(int n)
{
    char str[100];
    int i=0;
    while(n!=0)
    {
        int t=0;
        t=n%16;
        if(t<10)
        {
            str[i++]=t+48;
        }
        else
        {
            str[i++]=t+55;
        }
        n/=16;
    }
    cout << endl;
    for(int j=i-1;j>=0;j--)
        cout << str[j];
}

int main()
{
    int n;
    cout << "Enter decimal no.: ";
    cin >> n;
    dec2hexadec(n);
    return 0;
}
