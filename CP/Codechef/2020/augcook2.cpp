#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n;
   cin >> n;
   int k=n;
   
   while(k--)
   {
      int a,b;
      cin >> a >> b;
   }
   
   int cnt=0;
   
   if(n<=5)
   {
      cout << n << endl;
   }
   else
   {
      while(n>5)
      {
        cnt+=n;
        n/=2;
      }
      cnt+=n;
      cout << cnt << endl;
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