#include<iostream>
using namespace std;

double s[25];
void dectobin(int n)
{
    int i=0;
    while(n>0)
    {
         s[i]= n % 2;
         n=n/2;
         i++;
    }
    cout << endl;
    for(int j=i-1;j>=0;j--)
        cout << s[j];
}

int main()
{
    int n;
    cout << "Enter Decimal No.: ";
    cin >> n;
    dectobin(n);
    return 0;
}
