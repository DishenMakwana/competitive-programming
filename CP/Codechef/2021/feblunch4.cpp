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

    string s;
    cin >> s;

    vector<int> freq(27, 0);

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 96]++;
    }

    int pair_cnt = 0, single_cnt = 0;
    for (int i = 1; i < freq.size(); i++)
    {
        int curr = freq[i];

        if (curr == 0)
        {
            continue;
        }

        pair_cnt += curr / 2;
        single_cnt += curr % 2;
    }

    if (single_cnt <= pair_cnt)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
        return;
    }
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
