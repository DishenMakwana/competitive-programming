#include "bits/stdc++.h"
using namespace std;

int minScalerProduct(int a[], int b[], int n, int m)
{
    sort(a, a + n);
    sort(b, b + m);

    int sum = 0;
    for (int i = 0; i < max(n, m); i++)
    {
        sum += a[i] * b[i];
    }
    cout << sum << endl;
}

int32_t main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    cout << minScalerProduct(a, b, n, m) << endl;
    return 0;
}