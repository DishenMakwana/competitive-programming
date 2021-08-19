#include<bits/stdc++.h>
using namespace std ;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main() 
{
    IOS;
	int t;
	cin >> t;
	while(t--)
    {
		int n;
		cin >> n;

		int a[n];
		for( int i = 0 ; i < n ; i++ )
        {
			cin >> a[i] ;
		}

		int sum = 0 ;
		for( int i = 0 ; i < n ; i++ )
        {
			sum = sum + a[i];
		}

		if(sum < 0) 
        {
			cout << "NO" << endl ;		
		}
        else if( sum >= 0 )
        {
			cout << "YES" << endl ;
		}
	}
	return 0;
}