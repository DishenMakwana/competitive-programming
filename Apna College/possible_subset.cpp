#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void subset(int a[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }
}

int32_t main()
{
    boost;
    int a[3] = {1, 2, 3};
    subset(a, 3);
    return 0;
}