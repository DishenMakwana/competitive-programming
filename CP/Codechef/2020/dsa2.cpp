#include <bits/stdc++.h>
#define ll long long
#define int long long int
#define IOS  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vec  vector<ll>
#define pb push_back
 
using namespace std;

int32_t main()
{
    int t=1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        reverse(s.begin(),s.end());
        int n=stoi(s);
        cout << n << endl;
    }
    return 0;
}