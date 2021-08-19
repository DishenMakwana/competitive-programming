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
        string s;
        cin >> s;
        int cnt=0;

        for(int i=0;i<s.length();i++)
        {
            if(cnt && s[i]=='B')
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}