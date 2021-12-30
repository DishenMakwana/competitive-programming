#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans += max(a[i] + b[j], b[i] + a[j]) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}