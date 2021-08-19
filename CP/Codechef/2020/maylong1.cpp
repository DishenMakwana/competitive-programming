#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n;
   cin >> n;
   cout << 2*n << endl;
   for(int i=0;i<n;i++)
   {
      cout << "a";
   }
   for(int i=0;i<n;i++)
   {
      cout << "b";
   }
   cout << endl;
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