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
        int n,c0,c1,h;
        cin >> n >> c0 >> c1 >> h;
        string s;
        cin >> s;

        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                ans += min(c0,c1+h);
            }
            else
            {
                ans += min(c1,c0+h);
            }
        }
        cout << ans << endl;
    }
    return 0;
}