#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"

// using namespace __gnu_pbds;
using namespace std;

#define int long long int
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
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int sum1 = a[0] * a[1] + abs(a[0] - a[1]);
    int sum2 = a[n - 1] * a[n - 2] + abs(a[n - 1] - a[n - 2]);

    cout << max(sum1, sum2) << endl;
}

int32_t main()
{
    boost;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}