#include "bits/stdc++.h"
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int32_t main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n,k,d;
        cin >> n >> k >> d;
        int sum=0,x;

        for(int i=0;i<n;i++)
        {
            cin >> x;
            sum += x;
        }

        if(sum/k > d)
        {
            cout << d << endl;
        }
        else
        {
            cout << sum/k << endl;
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}