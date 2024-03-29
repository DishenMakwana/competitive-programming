#include "bits/stdc++.h"
using namespace std;

int kadane(int a[], int n)
{
    int currsum = 0, mxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += a[i];
        mxsum = max(mxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return mxsum;
}

int32_t main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int wrapsum, nonwrapsum;

    nonwrapsum = kadane(a, n);

    if (nonwrapsum < 0)
    {
        cout << nonwrapsum << endl;
        return 0;
    }

    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalsum + kadane(a, n);

    cout << max(wrapsum, nonwrapsum) << endl;

    return 0;
}