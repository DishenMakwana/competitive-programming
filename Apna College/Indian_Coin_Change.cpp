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

    int x;
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;

    rep(i, 0, n)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];

        if (x == 0)
            break;

        // cout << ans << " " << x << endl;
    }

    cout << ans << endl;
    return 0;
}