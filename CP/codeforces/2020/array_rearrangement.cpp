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
        int n,x;
        cin >> n >> x;
        int a[n],b[n];

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }

        reverse(b,b+n);
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]+b[i]<=x)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }

        if(cnt==n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}