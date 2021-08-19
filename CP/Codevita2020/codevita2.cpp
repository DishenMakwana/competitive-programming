#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int32_t main()
{
  ll n,k;
  cin >> n >> k;
  
  if(n==1)
  {
    cout << 0 << endl;
    return 0;
  }
  
  ll a[n]={0};
  for(ll i=0;i<n;i++)
    cin >> a[i];
    
  sort(a,a+n); 
  ll cnt=0;
  
  for(int i=1;i<n-1;i++) //check for all middle elements
  {
     if( (abs(a[i]-a[i-1])<=k && a[i]!=a[i-1]) || (abs(a[i]-a[i+1])<=k && a[i]!=a[i+1]) )
     {
        cnt++;
     }
     else
     {
        ll l=0;
        for(int j=i;j<n;j++)
        {
           if( abs(a[j]-a[i])<=k && a[j]!=a[i] )
           {
              l++;
              break;
           }
           else if( abs(a[j]-a[i])>k )
           {
              break;
           }
        }
        
        for(int j=i;j>=0 && l!=1;j--)
        {
           if( abs(a[j]-a[i])<=k && a[j]!=a[i] )
           {
              l++;
              break;
           }
           else if( abs(a[j]-a[i])>k )
           {
              break;
           }
        }
        
        cnt += l;
     }
  }
  
  for(int i=0;i<n;i++) //check for first element
  {
     if( abs(a[0]-a[i])<=k && a[0]!=a[i] )
     {
        cnt++;
        break;
     }
  }
  
  for(int i=n-2;i>=0;i--) //check for last element
  {
     if( abs(a[n-1]-a[i])<=k && a[n-1]!=a[i] )
     {
        cnt++;
        break;
     }
  }
  cout << cnt << endl;
  return 0;
}