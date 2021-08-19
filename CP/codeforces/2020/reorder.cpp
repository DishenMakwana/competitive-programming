#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
	int t=1;
	cin>>t;
    while(t--)
    {
            int n,p;
            cin>>n>>p;
            int a[n],cnt=0;

            for(int i=0;i<n;i++)
            {
                cin>>a[i];
                cnt += a[i];
            }
            
            if(cnt==p)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
	}
	return 0;
}