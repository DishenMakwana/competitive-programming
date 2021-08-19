#include <bits/stdc++.h> 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,d;
        cin >> n >> d;
        int a[n];
        int risk=0,norisk=0;
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]<=9 || a[i]>=80)
            {
                risk++;
            }
        }

        norisk = n-risk;
        int days = (risk+d-1)/d + (norisk+d-1)/d;
        cout << days << endl;
    }
    return 0;
}