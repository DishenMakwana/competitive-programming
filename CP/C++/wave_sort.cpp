#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

void wave_sort(int a[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(a[i] > a[i-1])
        {
            swap(a[i],a[i-1]);
        }

        if(a[i] > a[i+1] && i<n-1)
        {
            swap(a[i],a[i+1]);
        }
    }
}

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        wave_sort(a,n);

        for(int i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}