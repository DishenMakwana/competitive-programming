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
        int n, k;
        cin >> n >> k;
        int a[n];
        set<int> h1;

        int sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a, a + n);
        h1.insert(a[n - 1]);
        sum = a[n - 1];
        
        int f = -1;
        
        for (int i = n - 2; i >= 0; i--)
        {
            set<int> h2;
            sum += a[i];

            for (auto x : h1)
            {
                int p = (int)x;

                h2.insert(p);
                h2.insert(a[i]);
                h2.insert(p + a[i]);

                if (((p + a[i]) >= k) && ((sum - p - a[i]) >= k))
                {
                    f = n - i;
                    break;
                }

                if (((a[i]) >= k) && ((sum - a[i]) >= k))
                {
                    f = n - i;
                    break;
                }
            }
            if (f != -1)
                break;
                
            h1 = h2;
        }
        cout << f << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}