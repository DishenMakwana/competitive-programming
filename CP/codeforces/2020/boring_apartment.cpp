#include<bits/stdc++.h>
#define int long long int
using namespace std;
 
int32_t main()
{
	int t=1;
	cin>>t;
    while(t--)
    {
            int n;
            cin>>n;
            int k=n%10;
            int len = (log10(n))+1;
            cout << ((4*5)/2)*(k-1) + (len*(len+1)/2)<<endl;
	}
	return 0;
}