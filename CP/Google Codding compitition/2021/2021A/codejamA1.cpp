#include <bits/stdc++.h>
#define int long long
using namespace std;

const int maxn = 105;

int t, n, l[maxn];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for(int cases = 0; cases < t; cases++)  
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> l[i];
            l[i]--;
        }
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i; j < n; j++)
                if(l[j] == i)
                {
                    ans += j - i + 1;
                    reverse(l + i, l + j + 1);
                    break;
                }
        }
        cout << "Case #" << (cases + 1) << ": " << ans << "\n";
    }
    return 0;
}