#include "bits/stdc++.h"
using namespace std;
#define int long long int
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

inline void guts()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
}

const int MAX = 1e6 + 1;

int arr[MAX];

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void create_prim_arr()
{
    int cnt = 0;
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i < MAX; i++)
    {
        if (prime(i))
        {
            cnt++;
            arr[i] = cnt;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }
}

int32_t main()
{
    IOS;
    int t = 1;
    scanf("%lld", &t);
    // cin >> t;
    create_prim_arr();

    while (t--)
    {
        int x, y;
        scanf("%lld %lld", &x, &y);
        // cin >> x >> y;

        if (arr[x] <= y)
        {
            printf("Chef\n");
        }
        else
        {
            printf("Divyam\n");
        }
    }
    // cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}