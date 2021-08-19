#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main() 
{
    IOS;
	int n,m,k;
	cin >> n >> m >> k;
    int f = 0;
	
	for(int i=0; i<n; i++)
    {
	    int arr[k+1];
	    int sum = 0;

	    for(int i=0; i<k+1; i++)
        {
	        cin >> arr[i];
	    }
	    
	    for(int i=0; i<k; i++)
        {
	        sum += arr[i];
	    }

	    if ((sum>=m) && (arr[k]<=10))
        {
	        f += 1;
	    }
	}
	cout<<f;
	return 0;
}
