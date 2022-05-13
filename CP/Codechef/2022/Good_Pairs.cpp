#include "bits/stdc++.h"
using namespace std;

class timeit
{
private:
    std::chrono::_V2::system_clock::time_point start, end;

public:
    timeit() : start(chrono::high_resolution_clock::now()) {}
    ~timeit()
    {
        end = chrono::high_resolution_clock::now();
        cout << chrono::duration<float>(end - start).count() * 1000.0f << " ms\n";
    }
};

void solve()
{
    {
        // timeit time;
        int n;
        cin >> n;

        int a[n], b[n];
        for (auto &i : a)
            cin >> i;

        for (auto &i : b)
            cin >> i;

        int ans = 0;
        map<pair<int, int>, int> m;

        for (int i = 0; i < n; i++)
        {
            ans += m[{a[i], b[i]}];
            m[{b[i], a[i]}]++;
        }

        cout << ans << "\n";
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

// Time complexity: O(n)
// Space complexity: O(1)