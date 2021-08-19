#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main()
{
  IOS;
  int t;
  cin>>t;
  while(t--)
  {
    int n,best,worst;
    cin>>n;
    best=n,worst=1;
    int a[n];

    for(int i=0;i<n;i++)  
    {
        cin>>a[i]; 
    }

    for(int i=0;i<n;i++)
    {
        vector<int>v(n,0);
        v[i]=1;
        
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[i])
                v[j]=1;
        } 
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
                v[j]=1;
        }

        for(int s=0;s<i;s++)
        {
            if(v[s]==1)
            {
                for(int p=i;p<n;p++)
                {
                    if(a[p]<a[s])
                        v[p]=1;
                }
            }
        }

        for(int t=i+1;t<n;t++)
        {
            if(v[t]==1)
            {
                for(int h=0;h<i;h++)
                {
                    if(a[t]<a[h])
                        v[h]=1;
                }
            }
        }

        int ll=count(v.begin(),v.end(),1);
        worst=max(ll,worst);
        best=min(ll,best);
    }
    cout<<best<<" "<<worst<<endl;
  }
}