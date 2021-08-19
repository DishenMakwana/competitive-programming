#include "bits/stdc++.h"
using namespace std;

#define endl '\n'

#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int N = 1e7 + 2;

vector<bool> prime(N, true);
vector<int> prefix_prime(N);

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

void pre() // compute prefix prime and store in prefix_prime vector
{
    int i, cnt = 0;
    for (i = 1; i <= N; i++)
    {
        if (prime[i])
        {
            cnt++;
        }
        prefix_prime[i] = cnt;
    }
}

void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << 1 << endl;
    }
    else if (n == 3)
    {
        cout << 2 << endl;
    }
    else
    {
        int mid = n / 2;
        int extra = prefix_prime[n] - prefix_prime[mid];
        int grps = extra + 1;
        cout << grps << endl;
    }
}

int32_t main()
{
    boost;
    sieve();
    pre();
    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
