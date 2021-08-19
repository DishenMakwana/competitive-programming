#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int currsum = 0, mxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        mxsum = max(mxsum, currsum);
        currsum = max(currsum, 0);
    }

    cout << mxsum << endl;
    return 0;
}