#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define ll long long
#define pb push_back
#define mk make_pair

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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (max(a[i], a[i + 1]) > (2 * min(a[i], a[i + 1])))
        {
            int x = max(a[i], a[i + 1]);
            int y = min(a[i], a[i + 1]);

            while (x > (2 * y))
            {
                y *= 2;
                ans++;
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