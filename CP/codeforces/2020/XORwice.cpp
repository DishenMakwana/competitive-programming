#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

int32_t main()
{
	IOS;
	int t=1;
	cin >> t;
    
	while(t--)
    {
	    int a,b;
	    cin >> a >> b;
	    int x=(a&b);
	    cout<<(a^x)+(b^x)<<endl;
	}
    return 0;
}