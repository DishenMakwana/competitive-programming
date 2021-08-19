#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli long long int

vector<vector<lli>> gp;
vector<lli> vals;
lli ans=INT_MIN;

void dfs(int index, lli maxval)
{
	maxval = max(maxval, vals[index]);
	ans = max(ans, abs( vals[index]-maxval ));
    
    //cout << ans << endl;
	
    for(int i=0; i<gp[index].size(); i++)
    {
        //cout << gp[index][i] << "  ";
		dfs(gp[index][i], maxval);
    }
    //cout << endl;
}

int main()
{
    IOS;
	int n;
	cin >> n;

	gp.resize(n+1);
	vals.resize(n+1);

	for(int i=1; i<=n; i++)
		cin >> vals[i];

    lli u, root;
	for(int i=1; i<=n; i++)
	{
		cin >> u;
		if(u==-1)
			root=i;
		else
			gp[u].push_back(i);
	}

	dfs(root, vals[root]);
    
	cout << ans << endl;
	return 0;
}