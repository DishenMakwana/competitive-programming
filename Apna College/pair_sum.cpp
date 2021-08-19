#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int low = 0, high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << "pos :" << low << "  val :" << a[low] << endl;
            cout << "pos :" << high << "  val :" << a[high] << endl;
            break;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    return 0;
}