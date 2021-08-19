#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int ranking[501] = {};

void rankings(int rating[], int n)
{
    set<int> s;
    int i, rank = 1;
    multimap<int, int, greater<int>> mp;
    
    for(i=0; i<n; i++) 
      mp.insert({rating[i], i});
      
    for(auto it = mp.begin(); it!=mp.end();)
    {
        int x = it->first, count = 0;
        while(it->first == x)
        {
            ranking[it->second] = rank;
            it++;
            count++;
        }
        rank += count;
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        
        int r[n], i, j, c[n][m], monthrating[n], monthranking[n], monthrankingchanges[n] = {}, count = 0;
        
        for(i=0; i<n; i++) 
          cin>>r[i];
          
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>c[i][j];
            }
        }
        
        for(i=0; i<n; i++)
        {
            int max = 0, mon, temp = r[i];
            for(j=0; j<m; j++)
            {
                temp += c[i][j];
                if(temp > max) 
                {
                    max = temp;
                    mon = j;
                }
            }
            monthrating[i] = mon;
        }
        
        for(i=0; i<n; i++) 
          monthranking[i] = 501;
          
        for(j=0; j<m; j++)
        {
            for(i=0; i<n; i++) 
              r[i] += c[i][j];
              
            rankings(r, n);
            
            for(i=0; i<n; i++)
            {
                if(monthranking[i] > ranking[i]) 
                {
                    monthranking[i] = ranking[i];
                    monthrankingchanges[i] = j;
                }
            }
        }
        
        for(i=0; i<n; i++) 
          if(monthrankingchanges[i]!= monthrating[i])  
            count++; 
            
        cout<<count<<"\n";
    }
  return 0;
}
  