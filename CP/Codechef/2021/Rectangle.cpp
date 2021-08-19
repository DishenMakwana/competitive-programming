#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"

// using namespace __gnu_pbds;
using namespace std;

// #define int long long int
#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n : i++)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define pl pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define mk make_pair
#define scl(t) scanf("%lld", &t);
#define sc(t) scanf("%d", &t);
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

inline void guts()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

int32_t main()
{
    boost;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[502];
        int h1 = INT_MAX, h2 = 0, w1 = INT_MAX, w2 = 0, cnt = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> s[j];

            for (int l = 0; l < m; l++)
            {
                if (s[j][l] == '1')
                {
                    cnt++;

                    if (j + 1 > h2)
                    {
                        h2 = j + 1;
                    }
                    if (j + 1 < h1)
                    {
                        h1 = j + 1;
                    }
                    if (l + 1 > w2)
                    {
                        w2 = l + 1;
                    }
                    if (l + 1 < w1)
                    {
                        w1 = l + 1;
                    }
                }
            }
        }
        int h = h2 - h1 + 1;
        int w = w2 - w1 + 1;

        if (cnt == (h * w))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
