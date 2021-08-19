#include <bits/stdc++.h>
#define ll long long
#define IOS  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vec  vector<ll>
#define pb push_back
#define int long long int
 
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin>>s;

    int l,r,count = 0;
    queue <int> magnet,iron;
    
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'M')
        {
            magnet.push(i);
        }
        if(s[i] == 'I')
        {
            iron.push(i);
        }

        if(s[i] == 'X'|| i==n-1)
        {
            int sheet,q;

            while(!magnet.empty() and !iron.empty())
            {
                sheet = 0;
                l = min(magnet.front(),iron.front());
                r = max(magnet.front(),iron.front());
                
                for(int q=l;q<=r;q++)
                {
                    if(s[q]==':')
                        sheet++;
                }

                if((k+1-abs(l-r)-sheet) > 0)
                {
                    count++;
                    magnet.pop();
                    iron.pop();
                }
                else if(magnet.front()<iron.front())
                {
                    magnet.pop();
                }
                else
                {
                    iron.pop();
                }
            }
            while(!magnet.empty())
            {
                magnet.pop();
            }
            while(!iron.empty())
            {
                iron.pop();
            }
        }
    }
    cout << count << endl;
}
 
int32_t main()
{
	IOS;
	ll t=1;
	cin >> t;
	while(t--)
	{
        solve();
	}
	return 0;
}