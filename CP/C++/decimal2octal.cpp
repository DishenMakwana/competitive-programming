#include<iostream>
using namespace std;

void dec2oct(int n)
{
    int a[100];
    int i=0;
    while(n!=0)
    {
        a[i]=n%8;
        n=n/8;
        i++;
    }
    cout << endl;
    for(int j=i-1;j>=0;j--)
        cout << a[j];
}

int main()
{
    int n;
    cout << "Enter decimal no.: ";
    cin >> n;
    dec2oct(n);
    return 0;
}
