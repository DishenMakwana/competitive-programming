#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
  int nn,n;
  cin >> nn;
  n=(4*nn)-1;
  int a[n][2]={0};
  
  for(int i=0;i<n;i++) 
    cin >> a[i][0] >> a[i][1]; 
  
  int X=0,Y=0;
  
  map<int,int> mx,my;
  
  for(int i=0;i<n;i++) 
  {
     mx[a[i][0]]++;
  }
  
  for(auto i:mx)
  {
     if(i.second%2!=0)
     {
        X=i.first;
     }
  }
  
  for(int i=0;i<n;i++)
  {
     my[a[i][1]]++;
  }
  
  for(auto i:my)
  {
     if(i.second%2!=0)
     {
        Y=i.first;
     }
  }
  cout << X << " " << Y <<endl;
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