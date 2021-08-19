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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vii a(n);

        rep(i, 0, n)
        {
            cin >> a[i].ff >> a[i].ss;
        }

        int l, p;
        cin >> l >> p;

        rep(i, 0, n)
        {
            a[i].ff = l - a[i].ff;
        }

        sort(a.begin(), a.end());

        int ans = 0;
        int curr = p;
        bool f = false;

        priority_queue<int, vector<int>> pq;

        rep(i, 0, n)
        {
            if (curr >= l)
            {
                break;
            }

            while (curr < a[i].ff)
            {
                if (pq.empty())
                {
                    f = true;
                    break;
                }
                ans++;
                curr += pq.top();
                pq.pop();
            }

            if (f)
            {
                break;
            }
            pq.push(a[i].ss);
        }

        if (f)
        {
            cout << "-1" << endl;
            continue;
        }

        while (!pq.empty() && curr < l)
        {
            curr += pq.top();
            pq.pop();
            ans++;
        }

        if (curr < l)
        {
            cout << "-1" << endl;
            continue;
        }

        cout << ans << endl;
    }
    return 0;
}