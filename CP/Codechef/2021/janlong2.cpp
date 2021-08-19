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

        for (int i = 0; i < n; i += 4)
        {
            char a, b, c, d;
            cin >> a >> b >> c >> d;

            int pos = (a - '0') * 8 + (b - '0') * 4 + (c - '0') * 2 + (d - '0') * 1;
            cout << char(pos + (int)'a');
        }
        cout << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}