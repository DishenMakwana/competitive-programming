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
        string s;
        cin >> s;

        int tot0 = 0, tot1 = 0;
        for (auto c : s)
        {
            if (c == '0')
            {
                tot0++;
            }
            else
            {
                tot1++;
            }
        }

        int ans = min(tot1, tot0);

        int curr0 = 0, curr1 = 0;

        for (auto c : s)
        {
            if (c == '0')
            {
                curr0++;
            }
            else
            {
                curr1++;
            }

            ans = min(ans, curr1 + (tot0 - curr0));
            // cout << ans << " ";
        }
        // cout << endl;

        cout << ans << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}