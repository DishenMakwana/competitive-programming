#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int tmp=-1;
        while(n--)
        {
            int a,b,c,d;
            cin >> a >> b >> c >> d;

            if(m%2!=0)
            {
                tmp=1;
            }
            else
            {
                if(b==c)
                    tmp=0;
            }
        }
        if(tmp!=0)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
        
    }
    return 0;
}