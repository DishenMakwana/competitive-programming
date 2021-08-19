#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int32_t main()
{
    IOS;
    int t=1;
    cin >> t;

    while(t--)
    {
        int n, k; 
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        
        array<int, 27> have{}, need{}; // int have[27], need[27];
        
        for(auto& c: a)
            have[c-'a']++;
        
        for(auto& c: b)
            need[c-'a']++;

        bool f = false;
        for(int i = 0; i < 26; i++) 
        {
            if(have[i] < need[i] || (have[i] -= need[i]) % k)
                f = true;

            have[i+1] += have[i];
        }
        cout << (f ? "No" : "Yes") << '\n';

    }
    return 0;
}