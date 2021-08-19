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
        int n;
        cin>>n;

        if( n==1 )
        {
            cout<<0<<endl;
            continue;
        }

        int f=1, l=INT_MAX, ans=0;

        while(l>=f)
        {
            int m = f + (l-f)/2;
            int q = (m+1)/2;
            int s = q+1;

            s += (s*(m-q));
            
            if(s<n)
                f = m+1;
            else
            {
                ans = m;
                l = m-1;
            }
        }
        cout<<ans<<endl;
	}
	return 0;
}