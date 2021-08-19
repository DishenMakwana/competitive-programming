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
        int n, k;
        cin >> n >> k;

        int a[n];
        int rej = 0, bot = 0, tooslw = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                rej++;
            }

            if (a[i] > k)
            {
                tooslw++;
            }

            if (a[i] <= 1 && a[i] >= 0)
            {
                bot++;
            }
        }

        float f = (float)n / 2;
        if ((n - rej) < ceil(f))
        {
            cout << "Rejected" << endl;
        }
        else if (tooslw > 0)
        {
            cout << "Too Slow" << endl;
        }
        else if (bot == n)
        {
            cout << "Bot" << endl;
        }
        else
        {
            cout << "Accepted" << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}