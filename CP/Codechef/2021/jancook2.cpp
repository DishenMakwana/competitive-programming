#include "bits/stdc++.h"
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;
        
        if (l == r)
            cout << 1 << endl;
        else
        {
            cout << 2 * (r - l + 1) - 1 << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}