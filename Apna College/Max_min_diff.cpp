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
#define endl '\n'

signed main()
{
    int n;
    cin >> n;

    vi a(n);
    rep(i, 0, n) cin >> a[i];

    sort(a.begin(), a.end());

    int mx = 0, mn = 0;

    rep(i, 0, n / 2)
    {
        mx += (a[i + n / 2] - a[i]);
        mn += (a[2 * i + 1] - a[2 * i]);
    }

    cout << "min : " << mn << " | max : " << mx << endl;
    return 0;
}