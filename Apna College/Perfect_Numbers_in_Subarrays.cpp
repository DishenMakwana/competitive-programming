// using sliding window approach
#include "bits/stdc++.h"
using namespace std;

int maxSum(int a[], int n, int k)
{
    if (n < k)
    {
        cout << "invalid values" << endl;
        return -1;
    }

    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += a[i];
    }

    int sum = res;
    for (int i = k; i < n; i++)
    {
        sum = sum + a[i] - a[i - k];
        res = max(res, sum);
    }

    return res;
}

bool isNumberPerfect(int n) // check here a number is perfect or not!
{
    int sum = 1;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
            {
                sum += i;
            }
            else
            {
                sum += i + n / i;
            }
        }
    }

    return (sum == n && n != 1);
}

int maxNumberOfPerfects(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (isNumberPerfect(a[i])) // define perfect number as value 1 in array
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    return maxSum(a, n, k);
}

int32_t main()
{
    // int a[] = {1, 2, 3, 6};
    // int n = 4, k = 2;

    int a[] = {28, 2, 3, 6, 496, 99, 8128, 24};
    int n = 8, k = 4;

    cout << "Max Possible Perfect Numbers in k Subarray size : " << maxNumberOfPerfects(a, n, k) << endl;
    return 0;
}