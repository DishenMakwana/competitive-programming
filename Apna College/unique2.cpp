#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            res = setBit(res, i);
        }
    }
    return res;
}

int32_t main()
{
    boost;
    int a[10] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4};
    cout << unique(a, 10) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}