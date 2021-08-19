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

    unordered_map<int, int> m;
    // map<int, int> m;

    rep(i, 0, n)
    {
        m[a[i]]++;
    }

    // map<int,int> :: iterator it;
    for (auto it : m)
    {
        cout << it.ff << " -> " << it.ss << endl;
    }

    return 0;
}