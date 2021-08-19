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
        int a,b,c;
        cin >> a >> b >> c;
        cout << a+b+c - min(a,min(b,c)) << endl;
    }
    return 0;
    
}