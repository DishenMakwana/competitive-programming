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

char a[3][3];

bool func1()
{
    if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X')
        return 1;
    if (a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X')
        return 1;
    if (a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X')
        return 1;
    if (a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X')
        return 1;
    if (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X')
        return 1;
    if (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X')
        return 1;
    if (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')
        return 1;
    if (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')
        return 1;

    return 0;
}

bool func2()
{
    if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O')
        return 1;
    if (a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O')
        return 1;
    if (a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O')
        return 1;
    if (a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O')
        return 1;
    if (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O')
        return 1;
    if (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O')
        return 1;
    if (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')
        return 1;
    if (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')
        return 1;

    return 0;
}

void solve()
{
    int tick = 0, tock = 0, notempty = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'X')
                tick++;
            else if (a[i][j] == 'O')
                tock++;
            else
                notempty++;
        }
    }

    bool flag1 = func1();
    bool flag2 = func2();

    if (tock > tick)
        cout << "3\n";

    else if (abs(tick - tock) > 1)
        cout << "3\n";

    else if (flag2 && tick > tock)
        cout << "3\n";

    else if (flag1 && tick <= tock)
        cout << "3\n";

    else if (flag1 && flag2)
        cout << "3\n";

    else if (flag1 || flag2)
        cout << "1\n";

    else if (notempty)
        cout << "2\n";

    else
        cout << "1\n";
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
