#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl "\n"

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin>>t;
  while(t--)
  {
    string s ;
    cin>>s ;
    ll k,x ;
    cin>>k>>x; 

    ll ans  = 0 ;
    map<char,int> mp ;
    for(auto c:s)
    {  
      mp[c]++;
      if( mp[c] > x )
      {
        k-- ;
        mp[c]-- ;
        if(k<0)
          break ;
        else 
          continue ;
      }
      ans++;   
    }
    cout<<ans<<endl ;  
  }
  return 0;
}
