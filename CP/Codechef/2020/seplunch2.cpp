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
		int n;
		cin>>n;
		int a[n];
		bool f=1;
		for(int i=0;i<n;i++)
		{
		    cin>>a[i];

		    if(!(__gcd(a[i],i+1)==a[i] or __gcd(a[i],i+1)==i+1 or a[i]==1))
		    {
		        f=0;
		    }
		}
		if(f)
		{
		    cout<<"YES"<<endl;
		}
		else
		{
		    cout<<"NO"<<endl;
		}
	}
    return 0;
}