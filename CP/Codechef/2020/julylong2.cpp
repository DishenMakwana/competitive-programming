#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n,m,x,y;
   cin >> n >> m >> x >> y;
   if(2*x<y)
   {
      cout << n*m*x << endl;
   }
   else if(n==1 && m==1)
   {
      cout << x << endl;
   }
   else if((n*m)%2==0)
   {
      cout << ((n*m)/2 * y) << endl;
   }
   else
   {
      if(x>=y)
        cout << ((n*m)/2 * y)+y << endl;
      else
        cout << ((n*m)/2 * y)+x << endl;
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