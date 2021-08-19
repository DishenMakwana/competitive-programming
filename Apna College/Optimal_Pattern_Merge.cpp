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

    priority_queue<int, vector<int>, greater<int>> minheap;

    rep(i, 0, n)
    {
        minheap.push(a[i]);
    }

    int ans = 0;
    while (minheap.size() > 1)
    {
        int a = minheap.top();
        minheap.pop();
        int b = minheap.top();
        minheap.pop();

        ans += a + b;
        minheap.push(a + b);
    }

    cout << ans << endl;
    return 0;
}