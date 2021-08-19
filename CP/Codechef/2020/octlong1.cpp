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
        int n,k,x,y;
        cin >> n >> k >> x >> y;

        int f=0,z=x+k;

		while(z!=x)
        {
	        if(z<n) //n
            {
		        if(z==y)
                {
		            f=1;
		            break;
		        }
		        else
                {
		            z += k; //k
		        }
	        }
	        else
            {
	            z -= n; //n
	        }
	    }
        
        if(f==1 || y==x)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}