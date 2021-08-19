#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
  int n,k,x=0;
  cin >> n >> k;
  for(int i=0;i<n;i++)
  {
     cin >> x;
     if(x%k==0)
     {
        cout << "1";
     }
     else
     {
        cout << "0";
     }
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