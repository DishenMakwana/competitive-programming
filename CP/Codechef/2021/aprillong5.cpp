#include "bits/stdc++.h"
using namespace std;

#define int long long int
#define ll long long
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; i < n : i++)
#define pl pair<ll, ll>
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define mk make_pair
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))

#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define scl(t) scanf("%lld", &t);
#define sc(t) scanf("%d", &t);

#define boost              \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

vector<vector<int>> a;

inline void guts()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("debug.txt", "w", stderr);
#endif
}

int getSum(int y1, int x1, int d)
{
  if (d == 0)
    return 0;

  int y2 = d + y1 - 1, x2 = d + x1 - 1;
  return a[y2][x2] - a[y2][x1 - 1] - a[y1 - 1][x2] + a[y1 - 1][x1 - 1];
}

void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  a.clear();
  a.resize(n + 1, vector<int>(m + 1));

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> a[i][j];
    }
  }

  //calculate prefix sum
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      a[i][j] += a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
    }
  }

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      int max_len = min(n - i + 1, m - j + 1);
      int l = 0, r = max_len, mid;

      while (l < r)
      {
        mid = (l + r + 1) / 2;

        if (k > (getSum(i, j, mid)) / (mid * mid))
        {
          l = mid;
        }
        else
        {
          r = mid - 1;
        }
      }
      ans += max_len - l;
    }
  }
  cout << ans << endl;
}

int32_t main()
{
  boost;
  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }
  // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}
