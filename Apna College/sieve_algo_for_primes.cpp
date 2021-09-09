#include "bits/stdc++.h"
using namespace std;

const int N = 1e5 + 10;
vector<bool> prime(N, true);

void primes()
{
    prime[0] = prime[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j < N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (int i = 1; i < 101; ++i)
    {
        if (i % 10 == 0)
        {
            cout << endl;
        }
        if (prime[i])
            cout << i << " ";
    }
}

int32_t main()
{
    primes();
    return 0;
}