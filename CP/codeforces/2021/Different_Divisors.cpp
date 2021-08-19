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
    int x;
    cin >> x;
    vector<int> prim;

    for (int i = x + 1;; i++) // first prim
    {
        int tmp = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                tmp = 0;
                break;
            }
        }
        if (tmp)
        {
            prim.push_back(i);
            break;
        }
    }

    for (int i = prim.back() + x;; i++) // second prim
    {
        int tmp = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                tmp = 0;
                break;
            }
        }
        if (tmp)
        {
            prim.push_back(i);
            break;
        }
    }

    cout << min(prim[0] * prim[1], prim[0] * prim[0] * prim[0]) << endl;
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