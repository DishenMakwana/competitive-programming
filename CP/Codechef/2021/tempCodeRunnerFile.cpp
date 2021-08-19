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

int32_t main()
{
    IOS;
    int t = 1;
    scanf("%lld", &t);
    // cin >> t;

    while (t--)
    {
        int n;
        scanf("%lld", &n);
        // cin >> n;
        vector<string> s(n);
        set<string> set;

        for (int i = 0; i < n; i++)
        {
            // cin >> s[i];
            string l = "";
            scanf("%s", l);
            s.push_back(l);
            set.insert(s[i]);
        }

        // for (auto x : set)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        int cnt = 0;
        int flg = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i].at(0) == s[j].at(0))
                {
                    continue;
                }

                string tmp1 = (s[j].at(0)) + (s[i].substr(1)); // new ith element
                string tmp2 = (s[i].at(0)) + (s[j].substr(1)); // new jth element

                auto f1 = set.find(tmp1) != set.end();
                auto f2 = set.find(tmp2) != set.end();
                // cout << f1 << " " << f2 << endl;

                if (tmp2 == s[i] && tmp1 == s[j])
                {
                    continue;
                }

                if (f1 == 0 && f2 == 0)
                {
                    cnt++;
                }
            }

            if (i == 0 && cnt == n - 1)
            {
                break;
            }
        }
        if (cnt > 0)
            printf("%lld\n", cnt * 2);
        // cout << (cnt)*2 << endl;
        else
            printf("0\n");
        // cout << 0 << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}