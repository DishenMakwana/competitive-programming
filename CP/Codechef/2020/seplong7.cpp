#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll k,t; 
    cin>>k>>t;
	while (t--) 
    {
	        ll n; 
            cin>>n;
	        bitset <1000001> b;
	        ll sum1=0,sum2=0;

	        for (ll i=n; i>0; i--) 
            {
	            if (sum1<sum2) 
                    sum1+=(ll)(pow(i,k)+0.5);
	            else 
                {   
                    sum2+=(ll)(pow(i,k)+0.5); 
                    b[i]=1;
                }
	        }
	        cout<<abs(sum1-sum2)<<endl;
	        for (ll j=1; j<n+1; j++) 
                cout<<b[j];
	        if (t!=0)  
                cout<<endl;
	}
	return 0;
}
