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
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (odd != 0 && even != 0)
        {
            if (odd > even)
            {
                cout << even << endl;
            }
            else
            {
                cout << odd << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}