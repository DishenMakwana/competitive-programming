#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main()
{
  IOS;
  int n;
  cin >> n;
  string b,g;
  cin >> b >> g;
  
  int r=0,m=0;
  for(int i=0;i<n;i++)
  {
     if(g[i]=='r')
     {
        r++;
     }
     else
     {
        m++;
     }
  }
  
  //cout << r << " " << m << endl;
  
  for(int i=0;i<n;i++)
  {
     if(b[i]=='r'&& r>0)
     {
        r--;
     }
     else if(b[i]=='m' && m>0)
     { 
        m--;
     }
     else
     {
        break;
     }
  }
  cout << r+m << endl;
  return 0;
}