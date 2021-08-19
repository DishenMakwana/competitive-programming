#include "bits/stdc++.h"
using namespace std;

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

int a[105] = {0}, ans[105] = {0};

void rec(int l, int r, int d)
{
    if (l > r)
        return;

    int m = l;
    for (int i = l; i <= r; i++)
        if (a[i] > a[m])
            m = i;

    rec(l, m - 1, d + 1);
    rec(m + 1, r, d + 1);
    ans[m] = d;
}

void solve()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    rec(1, n, 0);

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    IOS;
    int t = 1;
    scanf("%d", &t);
    // cin >> t;

    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}