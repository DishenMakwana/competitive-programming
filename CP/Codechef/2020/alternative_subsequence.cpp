#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        
        for(int i=0;i<n;i++)
            cin >> a[i];

        if(n<=2)
        {
            int ans = *max_element(a,a+n);
            cout << ans << endl;
        }
        else
        {
            int first=0,second=0;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    first += a[i];
                }
                else
                {
                    second += a[i];
                }
            }
            int ans = first > second ? first : second;
            cout << ans << endl;
        }
    }
    return 0;
}