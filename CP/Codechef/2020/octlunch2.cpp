#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        int a[n];

        int cnt = 0;
	    for (int i = 0; i < n - 1; ++i)
		    cnt += (a[i] == a[i + 1]);

	    for (int i = 0; i < q; i++) 
        {
            int x, y;
            cin >> x >> y;
            x--;
            if (x + 1 < n && a[x] == a[x + 1])
                cnt--;
            if (x && a[x] == a[x - 1])
                cnt--;

            a[x] = y;

            if (x + 1 < n && a[x] == a[x + 1])
                cnt++;
            if (x && a[x] == a[x - 1])
                cnt++;
                
            cout << n - cnt << '\n';
        }
    }
    return 0;
}