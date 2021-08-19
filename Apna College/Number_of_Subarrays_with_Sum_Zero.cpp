#include <iostream>
using namespace std;

#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <stack>

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define pb push_back
#define setBits(x) builtin_popcount(x)

signed main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    map<int, int> m;
    int prefSum = 0;

    rep(i, 0, n)
    {
        prefSum += a[i];
        m[prefSum]++;
    }

    int ans = 0;
    for (auto it : m)
    {
        int c = it.ss;
        ans += (c * (c - 1)) / 2;
        // cout << ans << " ";

        if (it.ff == 0)
        {
            ans += it.ss;
        }
    }

    cout << ans << endl;
    return 0;
}