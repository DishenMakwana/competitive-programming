#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

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

vector<int> check(int n, vector<int> a, int x)
{
    multiset<int> s;
    for (auto e : a)
        s.insert(e);

    vector<int> res;

    for (int i = 0; i < n; i++)
    {
        auto it1 = s.end();
        it1--;

        int y = x - *it1;
        s.erase(it1);

        auto it2 = s.find(y);

        if (it2 == s.end())
            return {};

        res.push_back(x - y);
        res.push_back(y);
        s.erase(it2);
        x = max(x - y, y);

        // cout << "res : ";
        // for (auto x : res)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        // cout << "set : ";
        // for (auto x : s)
        // {
        //     cout << x << " ";
        // }    
        // cout << endl;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int x = arr[i] + arr[2 * n - 1];
        vector<int> res = check(n, arr, x);

        if (res.size())
        {
            cout << "YES" << endl;
            cout << x << endl;
            for (int j = 0; j < n; j++)
            {
                cout << res[2 * j] << " " << res[2 * j + 1] << endl;
            }
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}