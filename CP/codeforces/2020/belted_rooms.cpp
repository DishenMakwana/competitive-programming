#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 
#define endl '\n'

int32_t main()
{
	IOS;
	int t=1;
	cin>>t;
    
	while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool cw=false,ccw=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '>')
            {
                cw = true;
            }
            if(s[i] == '<')
            {
                ccw = true;
            }
        }

        if(cw && ccw)
        {
            int ans=0;
            s += s[0];

            for(int i=0;i<n;i++)
            {
                if(s[i] == '-' || s[i+1] == '-')
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}