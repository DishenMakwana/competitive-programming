#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int i,int j)
{
    return (i>j);
}
int main()
{
    int n;
    cout << "Enter lenght of array: " << endl;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n,compare);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
