#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main()
{
	IOS;
	int tt;
	cin>>tt;
	for(int t=1;t<=tt;t++)
	{
		cout<<"Case #"<<t<<": ";
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int cnt=0,ma=-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]>ma && (i==n-1 || a[i]>a[i+1]))
			{
				cnt++;
			}
			ma=max(ma,a[i]);
		}
		cout<<cnt<<endl;
	}
	return 0;
}