#include<bits/stdc++.h>
using namespace std;
#define int long long int
 
int32_t main()
{
	int t=1;
	cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int a[n];
        bool f=false;

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]!=a[i-1] && i>0)
                f=true;
        }

        int x=0;
        if(!f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            
            for(int i=1;i<n;i++)
            {
                if( a[0]!=a[i] )
                {
                    x=i+1;
                    cout<<1<<" "<<i+1<<endl;
                }
            }

            for(int i=1;i<n;i++)
            {
                if( a[0]==a[i] )
                    cout<<i+1<<" "<<x<<endl;
            }
        }

        
    }
    return 0;
}