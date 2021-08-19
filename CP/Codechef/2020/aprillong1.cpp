#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int

void solve()
{
	int n, x;
	cin >> n >> x;	
	int a[n];
	
	for(int i=0; i<n; i++) 
	  cin >> a[i];
	
	sort(a, a+n);	
	int d=0;
	
	for(int i=0; i<n; i++)
	{
		if( a[i] < x ) 
		{
			d++;
			if(a[i]*2 > x)
				x=2*a[i];
		}
		else 
		{
			d++;
			while(x < a[i]) 
			{
				x=x*2;
				d++;
			}
			x=2*a[i];
		}
	}
	cout << d << "\n";
}

int32_t main()
{
  IOS;
  int t;
  cin >> t;
  while(t--)
     solve();
  
  return 0;
}