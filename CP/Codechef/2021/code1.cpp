#include "bits/stdc++.h"
using namespace std;

#define endl '\n'

#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

long long int total = 0;

void solve()
{
    int n;
    cin >> n;

    int first = 0, second = 0, third = 0;
    if (n == 1)
    {
        first = 1;
        second = third = 0;
    }
    else
    {

        first = 1;
        second = n / 2;
        third = n;
    }

    total += (first + second + third);
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
    cout << total << endl;
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
