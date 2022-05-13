#include "bits/stdc++.h"
using namespace std;
#define ll long long

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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        map<ll, ll> freq;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += freq[a[i]];
            if (k >= a[i])
            {
                freq[(k - a[i]) ^ a[i]]++;
            }
        }

        cout << ans << endl;
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