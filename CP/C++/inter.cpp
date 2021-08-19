#include <bits/stdc++.h>
#define ll long long int
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main() 
{
    IOS
  int t=1;
//   cin>>t;
  while(t--)
  {
      int n,c;
      cin>>n>>c;
      int start=1,end=n;
      int ans=1;
      
      if(n==1)
      {
          cout<<3<<" "<<ans;
          return 0;
      }
      
      while(start<=end)
      {
          int mid = start+(end-start)/5;
          cout<<1<<" "<<mid<<endl;
          int x;
          cin>>x;
          if(x==1)
          {
              end=mid-1;
              if(end<start) 
                break;
                
              cout<<2<<endl;
          }
          else if(x==0)
          {
              start=mid+1;
              ans=mid+1;
          }
      }
      cout<<3<<" "<<ans<<endl;
  }
  return 0;
}
