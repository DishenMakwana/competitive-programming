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
#define repp(i, a, b) for (int i = a; i <= b; i++)
#define ff first
#define ss second
#define pb push_back
#define setBits(x) builtin_popcount(x)

bool cmp(pii &a, pii &b)
{
    return a.ss > b.ss;
}

signed main()
{
    int n, k;
    cin >> n >> k;
    vi a(n);

    rep(i, 0, n) cin >> a[i];

    map<int, int> m;
    rep(i, 0, n)
    {
        int size = m.size();
        if (m[a[i]] == 0 && size == k)
        {
            break;
        }
        m[a[i]]++;
    }

    vii ans;
    for (auto it : m)
    {
        if (it.ss != 0)
        {
            ans.pb({it.ss, it.ff});
        }
    }

    sort(ans.begin(), ans.end(), greater<pii>());

    for (auto it : ans)
    {
        cout << it.ss << " " << it.ff << endl;
    }

    return 0;
}