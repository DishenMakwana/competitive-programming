#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while (t--)
    {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        sort(a.begin(), a.end());
        if (a[2] == a[0] + a[1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}