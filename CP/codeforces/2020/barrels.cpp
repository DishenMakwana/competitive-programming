#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,k;
    cin >> n >> k;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    sort(a,a+n);
    reverse(a,a+n);
    int ans=0;
    
    for(int i=0;i<=k;i++)
    {
        ans += a[i];
    }
    
    cout << ans << endl;
}

int32_t main()
{
	int t=1;
	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
