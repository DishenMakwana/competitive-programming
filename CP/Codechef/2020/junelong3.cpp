#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve() 
{
   int n;
   cin >> n;
   int a[n]={0},b[n]={0};
   for(int i=0;i<n;i++)
     cin >> a[i]; 
   for(int i=0;i<n;i++)
     cin >> b[i];
     
   sort(a,a+n);
   sort(b,b+n); 
    
   map<int,int> m;
   
   for(int i=0;i<n;i++)
   { 
      m[a[i]]++;
      m[b[i]]++;
   }
   
   for(auto i:m)
   {
      if(i.second%2!=0)
      {
         cout << "-1" << endl;
         return;
      }
   }
   
   vector<int> aa,bb;
   int ans=0,cnt=0;
   
   for(int i=0;i<n;i++)
   {
      if(a[i]!=b[i])
      {
         aa.push_back(a[i]);
         bb.push_back(b[i]);
      }
      else 
      {
         cnt++;
      }
   }
   if(n==cnt)
   {
      cout << "0" << endl;
      return;
   }
   
   /*for(int i=0;i<aa.size();i++)
   {
      cout << aa[i] << " ";
   }
   cout << endl;
   for(int i=0;i<bb.size();i++)
   {
      cout << bb[i] << " ";
   }
   cout << endl;*/
   
   vector<int> aaa,bbb;
   
   for(int i=0;i<aa.size();)
   {
      if(aa[i]==aa[i+1])
      {
         aaa.push_back(aa[i]);
         i+=2;
      }
      else
      {
         i++;
      }
   }
   for(int i=0;i<bb.size();)
   {
      if(bb[i]==bb[i+1])
      {
         bbb.push_back(bb[i]);
         i+=2;
      }
      else
      {
         i++;
      }
   }
   
   sort(aaa.begin(),aaa.end());
   sort(bbb.begin(),bbb.end(),greater<int>());
   int minn= a[0] < b[0] ? a[0] : b[0];
   
   /*for(int i=0;i<aaa.size();i++)
   {
      cout << aaa[i] << " ";
   }
   cout << endl;
   for(int i=0;i<bbb.size();i++)
   {
      cout << bbb[i] << " ";
   }
   cout << endl;*/
   
   //cout << minn << endl;
   
   for(int i=0;i<aaa.size();i++)
   {
      if(min(aaa[i],bbb[i])<2*minn)
      {
         ans += min(aaa[i],bbb[i]);
      }
      else
      {
         ans += 2*minn;
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
