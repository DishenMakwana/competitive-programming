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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        
        if (x == y)
        {
            cout << n << " " << n;
        }
        else if (x < y)
        {
            if (k % 4 == 1)
            {
                cout << n + x - y << " " << n;
            }
            else if (k % 4 == 2)
            {
                cout << n << " " << n + x - y;
            }
            else if (k % 4 == 3)
            {
                cout << y - x << " " << 0;
            }
            else
            {
                cout << 0 << " " << y - x;
            }
        }
        else
        {
            if (k % 4 == 1)
            {
                cout << n << " " << y + n - x;
            }
            else if (k % 4 == 2)
            {
                cout << y + n - x << " " << n;
            }
            else if (k % 4 == 3)
            {
                cout << 0 << " " << x - y;
            }
            else
                cout << x - y << " " << 0;
        }

        cout << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}