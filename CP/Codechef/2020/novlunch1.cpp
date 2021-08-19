#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int ans=0,sum=a[0];
    for(int i=1;i<n;i++)
    {
        sum--;
        ans++;
        if(sum>=0)
        {
            sum += a[i];
        }
        else
        {
            break;
        } 
    }
    if(sum)
    {
        ans += sum;
    }
    cout << ans << endl;
}

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}