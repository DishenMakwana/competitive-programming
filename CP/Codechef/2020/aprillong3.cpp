#include<bits/stdc++.h>
#define int long long
#define PI 3.14159265358979323
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mpr(a,b) make_pair(a,b)
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std ;
int mod = 1000000007;

void solve()
{
    string s;
    cin >> s;
    bool a[s.size()]={false};
    int cnt=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='x' && s[i-1]=='y' && !a[i] && !a[i-1] )
        {
            cnt++;
            a[i]=true;
            a[i-1]=true;
        }
        if(s[i]=='y' && s[i-1]=='x' && !a[i] && !a[i-1] )
        {
            cnt++;
            a[i]=true;
            a[i-1]=true;
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
    IOS;
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}