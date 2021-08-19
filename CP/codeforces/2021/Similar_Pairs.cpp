#include "bits/stdc++.h"
using namespace std;
#define int long long int
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
    int odd = 0, even = 0;
    
    for (int &x : a)
    {
        cin >> x;

        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (even % 2 != odd % 2)
    {
        cout << "NO\n";
    }
    else
    {
        if (even % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (a[i] % 2 != a[j] % 2 && abs(a[i] - a[j]) == 1)
                    {
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
    }
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