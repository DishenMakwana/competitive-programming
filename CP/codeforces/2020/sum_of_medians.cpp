#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n*k];

        for(int i=0;i<n*k;i++)
        {
            cin >> a[i];
        }
        reverse(a,a+(n*k));

        int sum=0,add=n/2+1,i=n/2;
        while(k--)
        {
            sum += a[i];
            i += add;
        }
        cout << sum << endl;
    }
    return 0;
}