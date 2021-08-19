#include "bits/stdc++.h" 
#define int long long int
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        set<pair<pair<int,int>,int>> set;
        int n=s.size();

        for(int i=0;i<n;i++)
        {
            string tmp;

            int cnt = 0, idx_first = -1, cntone = 0, ini_val = 0;

            for(int j=i;j<n;j++)
            {
                tmp += s[j];

                if(s[j] == '1')
                {
                    cntone++;

                    if(cntone == 1)
                    {
                        idx_first = ini_val;
                    }
                    else
                    {
                        idx_first = ini_val - (idx_first-cnt);
                        cnt++;
                        cntone--;
                    }
                }
                
                pair<pair<int,int>,int> ans = {{cnt,idx_first},j-i+1};
                set.insert(ans);
                ini_val++; 
            }
        }

        /*for(auto x:set)
        {
            cout << x.first.first << " " << x.first.second << " " << x.second << endl;
        }
        cout << endl;*/
        
        cout << set.size() << endl;
    }
    return 0;
}