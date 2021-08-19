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
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];

    int sum = 0, ans = INT_MAX;

    rep(i, 0, k)
    {
        sum += a[i];
    }
    cout << sum << " ";

    ans = min(ans, sum);

    // sliding window
    rep(i, 1, n - k + 1)
    {
        sum += (-a[i - 1] + a[i + k - 1]);
        ans = min(ans, sum);
        cout << sum << " ";
    }
    cout << endl;

    cout << ans << endl;
    return 0;
}