#include "bits/stdc++.h"
using namespace std;
#define int long long int
int N = 1e6 + 100;
int arr[10000001];

int32_t main()
{   
    vector<char> prime_check(N, true);

    prime_check[0] = prime_check[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (prime_check[i] && i * i < N)
        {
            for (int j = i * i; j < N; j += i)
                prime_check[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (prime_check[i] && prime_check[i - 2])
        {
            arr[i] = arr[i - 1] + 1;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}