#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int unique(int a[], int n)
{
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum ^ a[i];
    }
    return xor_sum;
}

int32_t main()
{
    boost;
    int a[7] = {1, 2, 3, 4, 1, 2, 3};
    cout << unique(a, 7) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}