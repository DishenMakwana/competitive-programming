#include "bits/stdc++.h"
using namespace std;

template <typename T>
void bubble_sort(T arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

signed main()
{
    int a[5] = {1, 5, 3, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    bubble_sort<int>(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    float b[5] = {1.2, 5.4, 3.1, 2.5, 4.4};
    int m = sizeof(a) / sizeof(a[0]);

    bubble_sort<float>(b, n);

    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}