#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
  int h,p;
  cin >> h >> p;
  while(h>0 && p>0)
  {
    h = h - p;
    p = p/2;
  }
  if(h<=0)
  {
     cout << 1 << endl;
  }
  else if(p<=0)
  {
     cout << 0 << endl;
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