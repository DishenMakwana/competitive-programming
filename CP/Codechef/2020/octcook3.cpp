#include<bits/stdc++.h>
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> &vis, vector<int> &ans, int p, int f)
{
    vis[p]=1;

    if(f) 
        ans[p]=2;
    else 
        ans[p]=1;

    for(int i=0 ; i<adj[p].size() ; i++)
    {   
        if( !vis[adj[p][i]] ) 
        {
            dfs(adj, vis, ans, adj[p][i], !f);
        }
    }
}

int32_t main()
{
    IOS;
    int t=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> adj(n);

        for(int i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            x--;    y--;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        vector<int> ans(n,0);
        vector<int> vis(n,0);
        
        dfs(adj, vis, ans, 0, 1);
        
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}