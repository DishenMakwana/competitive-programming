#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline void guts()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e : v)
    {
        cin >> e;
    }

    sort(v.rbegin(), v.rend());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (v[i] % 2 == 0)
            {
                ans += v[i];
            }
        }
        else
        {
            if (v[i] % 2 == 1)
            {
                ans -= v[i];
            }
        }
    }

    if (ans == 0)
    {
        cout << "Tie" << endl;
    }
    else if (ans > 0)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
    // cout << ans << endl;
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