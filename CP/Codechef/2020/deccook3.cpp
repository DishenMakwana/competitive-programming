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
        int zero=0,one=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if(s.length()%2==1 || zero==0 || one==0)
        {
            cout << "-1\n";
        }
        else
        {
            cout << abs(zero-one)/2 << endl;
        }
    }
    return 0;
}