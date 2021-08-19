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
        int n;
        cin >> n;
        int pos = 0, neg = 0;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            for (int j = 0; j < m; j++)
            {
                int item;
                
                cin >> item;
                if (item > 0)
                    pos++;
                else
                    neg++;
            }
        }
        cout << pos * neg << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}