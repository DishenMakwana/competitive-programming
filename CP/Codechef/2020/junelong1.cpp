#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n;
   cin >> n;
   int a[n];
   
   for(int i=0;i<n;i++)
   {
      cin >> a[i];
   }
   
   int ans=1;
   for(int i=0;i<n;i++)
   {
      ans *= a[i];
   }
   if(ans%2==0)
   {
      cout << "NO" << endl;
   }
   else
   {
      cout << "YES" << endl;
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