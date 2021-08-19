#include "bits/stdc++.h"
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        total += x;
    }
    if (total % k == 0)
    {
        cout << "0\n";
    }
    else
    {
        cout << "1\n";
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
    return 0;
}