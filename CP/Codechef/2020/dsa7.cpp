#include<bits/stdc++.h>
#define int long long int
#define endl '\n'   
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        while(n--)
        {
            int i,n,q;
            cin >> i >> n >> q;
            if(i==q || n%2==0)
            {
                cout << n/2 << endl;
            }
            else
            {
                cout << 1+n/2 << endl;
            }
        }
    }
    return 0;
}