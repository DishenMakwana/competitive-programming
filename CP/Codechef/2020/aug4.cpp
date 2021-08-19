#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   string s,p;
   cin >> s >> p;
   
   map<char,int> m;
   for(int i=0;i<s.length();i++)
   {
      m[s[i]]++;
   }
   for(int i=0;i<p.length();i++)
   {
      m[p[i]]--;
   }
   
   string ans;
   
   /*for(auto i:m)
   {
      cout << i.first << " " << i.second << endl;
   }*/
   
   for(auto i:m)
   {
      string tmp1="",tmp2="";
      
      for(int j=0;j<i.second;j++)
      {
         tmp1 += i.first;
      }
      
      if(i.first==p[0])
      {
         tmp2 += p;
            
         if((ans+tmp1+tmp2) < (ans+tmp2+tmp1))
         {
            ans += (tmp1+tmp2);
         }
         else
         {
            ans += (tmp2+tmp1);
         }
      }
      else
      {
         ans += tmp1;
      }   
   }
   cout << ans << endl;
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