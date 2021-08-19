#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
typedef long long ll;

void solve() 
{
  ll n,k;
  cin >> n >> k;
  ll a[n]={0};
  for(ll i=0;i<n;i++)
    cin >> a[i];
    
  ll min = LONG_LONG_MAX,ans = 0;
  for(ll i=0;i<n;i++)
  {
    if(k%a[i] == 0)
    {
       ll t = (k/a[i])-1;
       if(t < min)
       {
          min = t;
          ans = a[i];  
       }                    
    }
  }
  if(ans == 0)
  {
     cout << -1 << endl;
  }
  else
  {
     cout << ans << endl;
  }
}
 
int32_t main()
{
  IOS;
  int t;
  cin >> t;
  while(t--)
     solve();
  
  return 0;
}