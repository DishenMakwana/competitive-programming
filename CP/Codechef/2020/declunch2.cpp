#include "bits/stdc++.h"
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, p;
    cin >> s >> p;
    int ones = 0;   // 0 < i < j < n;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ones++;
        }
        if (p[i] == '1')
        {
            ones--;
        }
        if (ones < 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    if (ones != 0)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
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