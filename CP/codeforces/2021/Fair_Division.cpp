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
    int one = 0, two = 0, x = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            two++;
        }
        else
        {
            one++;
        }
    }

    if ((one + two * 2) % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int sum = (one + two * 2) / 2;

        if (sum % 2 == 0 || (sum % 2 == 1 && one != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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