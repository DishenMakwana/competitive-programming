#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve()
{
    string pat, text;
    cin >> pat >> text;

    unordered_map<char, int> m;
    unordered_map<char, int> m1;

    int cnt_p = pat.size(), cnt_t = 0;

    for (auto &x : pat)
    {
        m[x]++;
        // cnt_p++;
    }

    int k = 0, i = 0;
    for (i = 0; text[i]; ++i)
    {
        m1[text[i]]++;
        cnt_t++;

        if (m1[text[i]] > m[text[i]])
        {
            while (m1[text[i]] > m[text[i]])
            {
                m1[text[k++]]--;
                cnt_t--;
            }
        }

        if (cnt_t == cnt_p)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}