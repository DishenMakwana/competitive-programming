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
        int a,b;
        cin >> a >> b;

        int o1,e1,o2,e2;
        if(a%2==0)
        {
            o1 = abs(a/2);
            e1 = abs(a/2);
        }
        else
        {
            o1 = abs((a+1)/2);
            e1 = o1-1;
        }
        
        if(b%2==0)
        {
            o2 = abs(b/2);
            e2 = abs(b/2);
        }
        else
        {
            o2 = abs((b+1)/2);
            e2 = o2-1;
        }
        
        int ans = o1*o2 + e1*e2;
        cout << ans << endl;
    }
    return 0;
}