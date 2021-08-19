#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

int prime(int n)
{
     for(int j=2;j<=n/2;j++)
     {
         if(n%j==0)
            return 0;
     }
     return 1;
}

int32_t main() 
{
   IOS;
   int n,cnt,sum=0,count=0;
   vector<int> a;
   cin >> n;
   for(int i=2;i<=n;i++)
   {
     cnt=1;
     for(int j=2;j<=n/2;j++)
     {
         if(i%j==0)
           cnt=0;
     }
     if(cnt==1)
     {
        a.push_back(i);
     }
   }
   for(int i=0;i<a.size();i++)
   {
      sum=sum+a[i];
      if(prime(sum))
        count++;
   }
   cout << count << endl;
   return 0;
}