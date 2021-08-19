#include "bits/stdc++.h" 
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
        int x,y,k,n;
        cin >> x >> y >> k >> n;
        
        if(abs(x-y)%k == 0)
        {
            if(((x-y)/k)%2 == 0)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}