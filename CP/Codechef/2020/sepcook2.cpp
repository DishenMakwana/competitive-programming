#include <bits/stdc++.h>
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
using namespace std;
typedef long long int ll;

void solve()
{
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> one;
        one.push_back(0);

        for(int i=0;i<s.length();i++)
        {
            int ch=s[i]-'0';
            if(ch==1)
            {
                one.push_back(i+1);
            }
        }

        one.push_back(n+1);
        priority_queue<pair<int,int>> pq;
        int xx=one.size();
        int disconnect=0;

        if(xx==2)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=1;i<xx;i++)
            {
                if(i==1 || i==xx-1){
                    pq.push({one[i]-one[i-1]-1,-1});
                }
                else
                {
                    pq.push({one[i]-one[i-1]-1,-2});
                }
            }
            while(!pq.empty())
            {
                int x=pq.top().first;
                int y=-pq.top().second;
                pq.pop();

                if(k>=y)
                {
                    k=k-y;
                }
                else
                {
                    disconnect+=x;
                }
            }
            cout<<disconnect<<endl;
        }
}


int32_t main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--)
	    solve();
    return 0;
}