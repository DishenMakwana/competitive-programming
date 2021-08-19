#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int flag=0,cnt=0;
        vector<int> v;

        for(int i=0 ; i<s.length() ;)
        {
            if(s[i]=='1')
            {
                while(s[i] == '1')
                {
                    cnt++;
                    i++;
                    if(i == s.length())
                        break;
                }
                v.push_back(cnt);
                cnt=0;
            }
            else
            {
                i++;
            }
        }
        sort(v.rbegin(), v.rend());
        
        int sum=0;
        if(v.empty())
        {
            cout<<"0\n";
        }
        else
        {
            for(int i=0;i<v.size();i+=2)
                sum += v[i];

            cout << sum <<"\n";
        }
    }
    return 0;
}