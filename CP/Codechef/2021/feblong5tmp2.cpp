#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline void guts()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

int teamname(vector<char> x, vector<char> y)
{
    set<char> s(x.begin(), x.end());
    for (auto z : y)
    {
        s.insert(z);
    }

    return s.size();
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        map<string, vector<char>> arr;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            arr[a.substr(1)].push_back(a[0]);
        }

        int ans = 0;
        for (auto i : arr)
        {
            for (auto j : arr)
            {
                if (i.first != j.first)
                {
                    int tmp = teamname(i.second, j.second);
                    ans += (i.second.size() - tmp) * (j.second.size() - tmp);
                }
            }
        }
        cout << ans << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}