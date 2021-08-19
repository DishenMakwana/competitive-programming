#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

int32_t main()
{
	IOS;
	int t=1;
	cin>>t;
    
	while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    int x=0;

	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        x += a[i];
	    }

	    sort(a,a+n);

	    if( x==0 )
        {
            cout<<"NO"<<endl;
        }
        else if( x<0 )
        {
            cout<<"YES"<<endl;
            
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            
            cout<<endl;
        }
        else // x>0
        {
            cout<<"YES"<<endl;

            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
	}
}