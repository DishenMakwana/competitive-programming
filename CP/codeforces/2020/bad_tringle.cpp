#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];

        if(a[0]+a[1] > a[n-1])
            cout << "-1\n";
        else
            cout << "1 2 " << n << "\n";
    }
    return 0;
}