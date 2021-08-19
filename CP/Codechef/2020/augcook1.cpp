#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n,k;
   cin >> n >> k;
   int a[n];
   
   for(int i=0;i<n;i++)
   {
      cin >> a[i];
   }
   
   int cnt=1,sum=0;
   
   for(int j=0;j<n;j++)
   {
      if(a[j]>k)
      {
          cout<<"-1\n";
          return;
      }
      else
      {
          sum=sum+a[j];
          if(sum>k)
          {
              cnt++;
              j--;
              sum=0;
          }     
      }
   }
   cout<<cnt<<endl;
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


