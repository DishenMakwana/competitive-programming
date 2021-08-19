#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline void guts() {
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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k == 1)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        while (k % 2 == 0)
        {
            k /= 2;
            // cout << k << " ";
        }
        // cout << endl;

        for (int i = 0; i < n; i++)
        {
            if (a[i] % k != 0)
            {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
    }
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