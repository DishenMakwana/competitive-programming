#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int

using namespace std;

int32_t main()
{ 
    IOS;
    int t=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int max=0;

        for(int i=0;i<n;i++)
        {
            int s,p,v;
            cin >> s >> p >> v;
            int profit = floor(p/(s+1))*v;
            if(profit>max)
                max=profit;
        }
        cout<<max<<endl;
    }
    return 0;
}