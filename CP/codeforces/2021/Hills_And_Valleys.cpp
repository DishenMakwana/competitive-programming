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

const int N = 3e5;
int a[N], n;

int isValley(int i)
{
    return (i > 0 && i < n - 1 && a[i] < a[i - 1] && a[i] < a[i + 1]);
}

int isHill(int i)
{
    return (i > 0 && i < n - 1 && a[i] > a[i - 1] && a[i] > a[i + 1]);
}

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int is[n] = {};
    int s = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (isHill(i) || isValley(i))
            is[i] = 1, s++;
    }

    int ans = s;
    for (int i = 1; i < n - 1; i++)
    {
        int temp = a[i];

        a[i] = a[i - 1];
        ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isValley(i - 1) + isHill(i) + isValley(i) + isHill(i + 1) + isValley(i + 1));

        a[i] = a[i + 1];
        ans = min(ans, s - is[i - 1] - is[i] - is[i + 1] + isHill(i - 1) + isValley(i - 1) + isHill(i) + isValley(i) + isHill(i + 1) + isValley(i + 1));

        a[i] = temp;
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