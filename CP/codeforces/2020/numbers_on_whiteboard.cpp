#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin >> n;
    multiset<int> s;
    for(int i=1;i<=n;i++)
    {
        s.insert(i);
    }
    vector<pair<int,int>> ans;

    for(int i=0;i<n-1;i++)
    {
        auto tmp = s.end();
        tmp--;
        int x = *tmp;
        s.erase(tmp); // erase at index so need of tmp--
        tmp = s.end();
        tmp--;
        int y = *tmp;
        s.erase(tmp); // erase at index so need of tmp-

        s.insert((x+y+1)/2);
        ans.push_back(make_pair(x,y));  
    }
    cout << *s.begin() << endl;
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
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
