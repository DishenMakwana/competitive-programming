#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    int zerocnt = 0, i = 0, ans = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] == 0)
        {
            zerocnt++;
        }

        while (zerocnt > k)
        {
            if (a[i] == 0)
            {
                zerocnt--;
            }
            i++;
        }

        ans = max(ans, j - i + 1);
    }

    cout << ans << endl;

    return 0;
}