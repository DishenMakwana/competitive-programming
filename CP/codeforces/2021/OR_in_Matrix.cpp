#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"

// using namespace __gnu_pbds;
using namespace std;

// #define int long long int
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

#define nline '\n'
#define sz(x) ((int)(x).size())
#define full(x) (x).begin(), (x).end()

int n, m;
int a[110][110];
int b[110][110];

int32_t main()
{
    boost;

    cin >> n >> m;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
            a[i][j] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (b[i][j] == 0)
            {
                a[i][j] = 0;
            }
            else
            {
                int flag = 1;
                for (int k = 1; k <= n; k++)
                {
                    if (b[k][j] == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                for (int s = 1; s <= m; s++)
                {
                    if (b[i][s] == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                    a[i][j] = 1;
                else
                    a[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (b[i][j])
            {
                int f = 0;
                for (int k = 1; k <= m; k++)
                    f |= a[i][k];
                for (int k = 1; k <= n; k++)
                    f |= a[k][j];
                if (!f)
                {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << a[i][m] << endl;
    }

    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
