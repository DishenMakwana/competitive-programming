#include "bits/stdc++.h"
using namespace std;
#define int long long int
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
    int n, k;
    cin >> n >> k;

    int ans = n;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
            {
                ans = min(ans, n / i);
            }

            if (n / i <= k)
            {
                ans = min(ans, i);
            }
        }
    }

    cout << ans << endl;
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