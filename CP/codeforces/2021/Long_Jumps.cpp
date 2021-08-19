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
    vector<int> a(n);

    for (int &x : a)
    {
        cin >> x;
    }

    vector<int> dp(n);

    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = a[i];
        int j = i + a[i];

        if (j < n)
        {
            dp[i] += dp[j];
        }

        // for (auto x : dp)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;
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