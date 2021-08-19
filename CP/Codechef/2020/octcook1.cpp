#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long int

int32_t main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        char a[n];
        int freq[26]={0};

        for(int i=0 ; i<n ; i++)    
        {
            cin >> a[i];
            freq[a[i]-'a']++;
        }
        if(freq[a[n-1]-'a'] > 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}