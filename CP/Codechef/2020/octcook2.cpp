#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        if( (int)r/l < 2 )
        {
            cout << r << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}