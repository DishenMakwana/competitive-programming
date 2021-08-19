#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

bool cmp(pair<int,int>&a , pair<int,int>&b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);

    for(int i=0;i<n;i++)
    {
        cin >> a[i].first; //fuel
    }
    for(int i=0;i<n;i++)
    {
        cin >> a[i].second; //cost
    }

    sort(a.begin(),a.end(),cmp); 
    int cnt=0,ans=0;   

    for(int i=0;i<n;i++)
    {
        cnt += a[i].first;
        ans += a[i].first*a[i].second;
        if(cnt>=n){
            ans -= a[i].second*(cnt-n);
            break;
        }
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