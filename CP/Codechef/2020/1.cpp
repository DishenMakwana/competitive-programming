#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int f=0;
        int s[] = {6,28,496,8128,33550336};
        for(int i=0;i<5;i++)
        {
            if(s[i]==n)
            {
                f=1;
                break;
            }
            else
            {
                f=-1;
            }
        }
        if(f==-1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
    }
    return 0;
}