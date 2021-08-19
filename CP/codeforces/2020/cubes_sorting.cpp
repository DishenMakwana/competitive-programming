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
	   int a[n];

	   for(int i=0;i<n;i++)
	       cin>>a[i];

	   bool f=false;

	   if(n==2)
	   {
	       if(a[0] <= a[1])
	           cout<<"YES"<<endl;
	       else
	           cout<<"NO"<<endl;
	   }
	   else
	   {
	       for(int i=0;i<n-1;i++)
	       {
	            if( a[i]>a[i+1] )
	                f=true;
	            else
	            {
	                f=false;
	                break;
	            }
	       }
	       if(f)
	           cout<<"NO"<<endl;
	       else
	           cout<<"YES"<<endl;
	   }
	}
    return 0;
}
