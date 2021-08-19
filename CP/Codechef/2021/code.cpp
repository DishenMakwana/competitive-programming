#include "bits/stdc++.h"
using namespace std;

#define endl '\n'

#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int N = 1e7 + 2;

vector<bool> prime(N, true);

void sieve() // prime sieve
{
    prime[0] = prime[1] = false;
    int i, j;

    for (i = 2; i * i < N; i++)
    {
        if (prime[i])
        {
            for (j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int minn = a;
    int maxx = b;
    bool minf = false;
    bool any_prime = false;

    for (int i = a; i <= b; i++)
    {
        if (!minf && prime[i])
        {
            minn = i;
            minf = any_prime = true;
        }
        if (prime[i])
        {
            maxx = i;
            any_prime = true;
        }
    }

    if (!any_prime)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << abs(maxx - minn) << endl;
    }
}

int32_t main()
{
    boost;
    sieve();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
