#include "bits/stdc++.h"
// #include "ext/pb_ds/assoc_container.hpp"

// using namespace __gnu_pbds;
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

inline void guts()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("debug.txt", "w", stderr);
#endif
}

void solve()
{
  int n, ans;
  cin >> n;

  vector<int> base_value = {0, 20, 36, 51};
  int dice_on_top = n % 4;
  int height = n / 4;
  int enclosed = (height - 1) * 44 + 60;

  if (height == 0)
  {
    ans = base_value[n];
  }
  else
  {
    ans = enclosed + base_value[dice_on_top] - 4 * (dice_on_top);
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
