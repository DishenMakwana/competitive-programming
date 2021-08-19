#include "bits/stdc++.h"
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int x = floor(s.length() / 3);
    // cout << "X:" << x << endl;

    map<int, int> mp;

    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }

    int p = 0;
    for (auto n : mp)
    {
        p += floor(n.second / 2);
    }
    // cout << "P:" << p << endl;

    cout << min(x, p) << endl;
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}