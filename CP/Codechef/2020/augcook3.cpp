#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n,k;
   cin>>n>>k;
   
   string s;
   cin>>s;
   
   int cnt0=0,cnt1=0;
   
   for(int i=0;i<n;i++)
   {
        if(s[i]=='0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
   }
   
   if((cnt0*k)%n!=0 || (cnt1*k)%n!=0)
   {
       cout<<"IMPOSSIBLE"<<endl;
       return;
   }
        
   int a=(cnt0*k)/n;
   int b=(cnt1*k)/n;
   string ans="";
   
   for(int i=0;i<n/k;++i)
   {
       if(i%2==0)
       {
           for(int j=0;j<a;++j)
           {
               ans+='0';
           }
           for(int j=0;j<b;++j)
           {
               ans+='1';
           }
       }
       else
       {
           for(int j=0;j<b;++j)
           {
               ans+='1';
           }
           for(int j=0;j<a;++j)
           {
               ans+='0';
           }
       }
   }
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
