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
    int w, h, n;
    cin >> w >> h >> n;
    int ans = 1;

    // if (n == 1)
    // {
    //     cout << "YES" << endl;
    //     return;
    // }

    while (w % 2 == 0)
    {
        w /= 2;
        ans *= 2;
    }
    while (h % 2 == 0)
    {
        h /= 2;
        ans *= 2;
    }
    cout << (ans >= n ? "YES" : "NO") << endl;
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