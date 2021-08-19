#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 

int32_t main()
{
	IOS;
	int t=1;
	cin>>t;

	while(t--)
    {
	    int n,k;
	    cin>>n>>k;
	    int a[n];

	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
        sort(a,a+n);

	    int x = a[0];
	    int cnt = 0;

	    for(int i=1;i<n;i++)
	    {
	        while( a[i]<k && (a[i]+x <= k) )
	        {
	            a[i] += x;
                //cout << a[i] << endl;
	            cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	}
}