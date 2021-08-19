#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define ll long long
#define pb push_back

string dtb(ll n) 
{ 
    string s=""; 
    while (n > 0) 
    { 
        s += (n%2) ? "1":"0"; 
        n = n / 2;  
    } 
    reverse(s.begin(),s.end());
    return s; 
}

ll btd(string n) 
{ 
    string num = n; 
    ll dec_value = 0; 
    ll base = 1; 
  
    for (ll i = num.length() - 1; i >= 0; i--) 
    { 
        if (num[i] == '1') 
            dec_value += base; 
            
        base = 1ll*base * 2; 
    }  
    return dec_value; 
}

ll binfun(string a,string b)
{
    string x,y;
    x=a+b;
    y=b+a;
    return abs(btd(x)-btd(y));
}

int32_t main() 
{
  ll t,n,m,i,j;
  cin >> t;
  
  while(t--)
  {
        cin>>n;
        vector<ll> a(n);
        vector<string> v(n);
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        for(i=0;i<n;i++)
        {
            v[i]=dtb(a[i]);
        }
        
        ll ans=INT_MIN;
        if(n<=10)
        {
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(binfun(v[i],v[j])>ans)
                    {
                        ans=binfun(v[i],v[j]);
                    }
                }
            }
            cout<<ans<<endl;
            continue;
        }
        
        ans=INT_MIN;
        for(i=0;i<n-1;i++)
        {
            if(binfun(v[i],v[n-1]) > ans)
                ans=binfun(v[i],v[n-1]);
        }
        cout<<ans<<endl;
  }
  return 0;
}