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
        int n,q;
        cin >> n >> q;
        string s;
        cin >> s;

        while(q--)
        {
            int l,r;
            cin >> l >> r;
            l--; r--;
            bool f = true;

            for(int i = 0; i < l ; i++)
                if(s[i] == s[l])
                { 
                    f = false;
                    break;
                }

            for(int i = r+1; i < n ; i++)
                if(s[i] == s[r]) 
                {
                    f = false;
                    break;
                }

            cout << (f ? "NO" : "YES") << '\n';

        }
    }
    return 0;
}