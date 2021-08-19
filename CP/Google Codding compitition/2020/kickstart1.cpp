#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mt make_tuple
#define res(v,n) v.resize(n)
using namespace std;

vector<ll>arr,ind;
void shift (ll x,ll y,ll z)
{
  ll temp=arr[x];
  arr[x]=arr[z];
  arr[z]=arr[y];
  arr[y]=temp;
  ind[arr[x]]=x;
  ind[arr[y]]=y;
  ind[arr[z]]=z;
}
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
      ll i,k,n;
      cin>>n>>k;
      res(arr,n+1);
      res(ind,n+1);            
      for (i=1;i<=n;i++)
      {
        cin>>arr[i];
        ind[arr[i]]=i;
      }
     /*for (i=1;i<=n;i++)
      {
        cout << ind[i] << " ";
      }
      cout<<endl;*/
      
      vector< pair<ll, pair<ll,ll> > > chef;
      ll t=0;
      vector< pair<ll,ll> >qry;
      
      for (i=1;i<=n;i++)
      {
        if (!(ind[i]-i))
          continue;
          
        if (!(arr[i]-ind[i]))
        {
          if (i<ind[i])
          {
            t += 1;
            qry.pb( {i,ind[i]} );
          }
          continue;
        }
        
        ll x,y,z;
        z=arr[i];
        y=i;
        x=ind[i];
        shift(x,y,z);
        chef.pb( {x, {y,z} } );
      }
      //cout << t << endl;
      if (t%2)
      {
        cout<<"-1\n";
        continue;
      }
      /*for(int i=0;i<qry.size();i++)
      {
        cout << qry[i].first << " " << qry[i].second << endl;
      }*/
      
      for (i=0;i<qry.size();i+=2)
      {
        ll x,y,z;
        x=ind[qry[i].first];
        y=ind[qry[i].second];
        z=ind[qry[i+1].second];
        
        shift(x,y,z);
        chef.pb({x, {y,z} });
        
        x=ind[qry[i+1].second];
        y=ind[qry[i+1].first];
        z=ind[qry[i].second];
        
        shift(x,y,z);
        chef.pb({x, {y,z} });
      }
    
      cout << chef.size() << "\n";
      for (auto i:chef)
        cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<"\n";
    
    }
    return 0;
}