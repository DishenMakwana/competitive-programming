#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"

// using namespace __gnu_pbds;
using namespace std;

#define int long long int
#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n : i++)
#define pl pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define mk make_pair
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))

#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
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

void solve(int tt)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < (n / 2); i++)
    {
        if (s[i] != s[n - i - 1])
        {
            cnt++;
        }
    }
    // cout << (n / 2) << endl;
    // cout << cnt << endl;
    // cout << k << endl;

    if (cnt == k)
    {
        cout << "Case #" << tt << ": " << 0 << endl;
    }
    else
    {
        cout << "Case #" << tt << ": " << abs(k - cnt) << endl;
    }
}

int32_t main()
{
    boost;
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
