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

void solve()
{
}

int32_t main()
{
    boost;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, vector<int>> map;
        for (int i = 0; i < n; i++)
        {
            map[a[i]].push_back(i);
        }

        // for (auto x : map)
        // {
        //     cout << x.first << endl;
        //     for (auto y : x.second)
        //     {
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
        int c[n] = {0};
        int i = n, cnt = 1;

        for (auto it = map.rbegin(); it != map.rend(); it++)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == it->first && c[i] == 0)
                {
                    for (auto y : it->second)
                    {
                        c[y] = cnt;
                        cnt++;
                    }
                }
            }
        }
        for (auto x : c)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
