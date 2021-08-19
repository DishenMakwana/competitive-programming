#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repb(i, a, b) for (int i = a; i >= b; i--)
#define pb push_back

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int T = 1;
  cin >> T;

  rep(ab, 0, T)
  {
    int n, x;
    cin >> n;

    ll vis[101];
    memset(vis, 0, sizeof(vis));

    rep(i, 0, n)
    {
      cin >> x;
      vis[x]++;
    }

    ll ans = 0, c = 1;

    rep(i, 0, 101)
    {
      if (vis[i])
      {
        ans += vis[i] * c;
        c++;
      }
    }
    cout << "Case #" << ab + 1 << ": " << ans << endl;
  }
  return 0;
}