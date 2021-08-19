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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        int cnt = 0;
        for (int i = 0; i < min(m, n); i++)
        {
            if (sum1 > sum2)
            {
                break;
            }
            sum1 -= a[i]; // first swap
            sum2 -= b[i];
            sum1 += b[i]; // first swap
            sum2 += a[i];
            cnt++;
        }
        
        if (sum1 > sum2)
        {
            cout << cnt << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}