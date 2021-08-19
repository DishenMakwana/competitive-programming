#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

int fun(int n)
{
  int ans=abs(n/9);
  if(n%9!=0)
  {
     ans++;
  }
  return ans;
}
void solve() 
{
   int c,r;
   cin >> c >> r;
   int cc=fun(c),rr=fun(r);
   
   //cout << cc << " " << rr << endl;
   
   if(cc==rr)
   {
      cout << 1 << " " << rr << endl;
   }
   else if(cc<rr)
   {
      cout << 0 << " " << cc << endl;
   }
   else if(cc>rr)
   {
      cout << 1 << " " << rr << endl;
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