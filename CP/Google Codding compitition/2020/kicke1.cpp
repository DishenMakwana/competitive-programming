#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)   
      cin>>a[i];
      
    int prev=-1;
    int ans=0,cnt=0;
    
    for(int i=0;i<n-1;i++)
    {
        int diff=a[i]-a[i+1];
        
        if(diff==prev)    
          cnt++;
        else
        {
            ans=max(ans,cnt+1);
            prev=diff;
            cnt=1;
        }
    }
    ans=max(ans,cnt+1);
    cout<<ans<<endl;
}

int32_t main() 
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t=1;
  cin >> t;
  for(int i=0;i<t;i++)
  {
    cout << "Case #" << i+1 << ": ";
    solve();
  }
  return 0;
}

