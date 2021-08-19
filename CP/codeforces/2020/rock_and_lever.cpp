#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int 

int32_t main()
{
	IOS;
	int t=1;
	cin>>t;

	while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int> m;

		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;

			m[ log2(x) ]++;
		}

		int ans=0;

        /*for(auto i:m)
        {
            cout << i.first << " " << i.second <<endl;
        }*/
        
		for(int i=0;i<m.size();i++)
        {
		    ans += m[i]*(m[i]-1)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}