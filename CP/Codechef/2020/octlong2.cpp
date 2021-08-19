#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n+1];

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        int x=a[0];
        int cnt=0,i=0;

        for(i=1;i<n;i++)
        {
            if( x<k )
	        {
	            cnt++;
	            break;
	        }
	        else
	        {
                x=x-k;
	            x=a[i]+x;
	            cnt++;
	        }
        }
        
        /*if(i==0 && x>k)
        {
            cnt += (int)(x/k)+1;
        }*/

        if(i>=n)
        {
	        cnt += (int)(x/k)+1;
	    }

        cout << cnt << endl;
    }
    return 0;
}