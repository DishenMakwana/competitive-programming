#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

bool sorted(int a[], int n)
{
    if (n == 1)
        return true;

    bool restArray = sorted(a + 1, n - 1);
    return (a[0] < a[1] && restArray);
}

int32_t main()
{
    boost;
    int a[] = {1, 2, 3, 4, 5};
    cout << sorted(a, 5) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}