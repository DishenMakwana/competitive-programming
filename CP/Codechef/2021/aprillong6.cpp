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

#define inf LLONG_MAX

int32_t main()
{
  boost;
  int t = 1;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;
    int n = s.length();

    vector<int> next0(n, inf), next1(n, inf);
    int n0 = inf, n1 = inf;

    for (int i = n - 1; i >= 0; i--)
    {
      next0[i] = n0;
      next1[i] = n1;

      if (s[i] == '1')
        n1 = i;
      else //s[i] == '0'
        n0 = i;
    }

    if (n0 == inf)
    {
      cout << "0\n";
      continue;
    }
    if (n1 == inf)
    {
      cout << "1\n";
      continue;
    }

    vector<int> len(n);
    bool one = false, zero = false;
    int cnt = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      len[i] = cnt;
      if (s[i] == '1')
        one = true;
      if (s[i] == '0')
        zero = true;
      if (one and zero)
      {
        cnt++;
        zero = one = false;
      }
    }

    string ans = "";
    int curr = n1;
    while (1)
    {
      ans.push_back(s[curr]);
      int p0 = next0[curr], p1 = next1[curr];

      if (p0 == inf)
      {
        ans.push_back('0');
        break;
      }
      if (p1 == inf)
      {
        ans.push_back('1');
        break;
      }

      if (len[p0] <= len[p1])
      {
        curr = p0;
      }
      else
      {
        curr = p1;
      }
    }

    cout << ans << endl;
  }
  // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
  return 0;
}
