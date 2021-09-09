#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    ll ans = 0, curr = 0;
    set<ll> s;
    s.insert(0);

    for (auto &it : a)
    {
        cin >> it;
        curr += it;

        if (s.count(curr))
        {
            ans++;

            s.clear();
            s.insert(0);
            s.insert(it);

            curr = it;
        }
        s.insert(curr);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}