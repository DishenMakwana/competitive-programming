#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

void solve()
{
    int n,k;
    cin >> n >> k;
    int a[n];
        
    for(int i=0;i<n;i++)
        cin >> a[i];

    if(k==1)
    {
        cout << "0\n";
        return;
    }

    sort(a,a+n);

    vector<int> ans;
    for(int i=1;i<n;i++)
    {
        ans.push_back(a[i]-a[i-1]);
    }

    // for(int i=0;i<ans.size();i++)
    // {
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    sort(ans.begin(),ans.end());

    if(k==2)
    {
        cout << *ans.begin() << endl;
    }
    else
    {
        int fans=0;
        for(int i=0;i<k-1;i++)
        {
            fans += ans[i];
        }
        cout << fans << endl;
    }
}

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}