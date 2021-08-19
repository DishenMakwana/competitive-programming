#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n,k;
   cin>>n>>k;
   vector<long long> a(n);
   for(int i=0;i<n;i++)
      cin>>a[i];
          
   map<long long,long long> m;
   vector<vector<long long>> v(n,vector<long long>(n,0)); //dp
                
   long long repeat = 0;
        
   for(int i=0;i<n;i++)
   {
       m[a[i]]++;
       if(m[a[i]] == 1)
           ;
       else if(m[a[i]] == 2)
           repeat += 2;
       else if(m[a[i]]>2)
           repeat += 1;
                
       v[0][i]=k+repeat;
   }
        
   long long previous = 0;
        
   for(int i=1;i<n;i++)
   {
       m.clear();
       previous = INT_MAX;
       repeat = 0;
            
       for(int j=0;j<i;j++)
       {
           previous = min(previous,v[j][i-1]);
       }
            
       for(int j=i;j<n;j++)
       {
           m[a[j]]++;
           if(m[a[j]] == 1)
               ;
           else if(m[a[j]] == 2)
               repeat+=2;
           else if(m[a[j]]>2)
               repeat+=1;
                    
           v[i][j] = k+repeat+previous;
       }
   }
        
   long long ans = INT_MAX;
   for(int j=0;j<n;j++)
       ans = min(ans,v[j][n-1]);
            
   cout<<ans<<endl;
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
