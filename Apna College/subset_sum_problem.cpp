#include "bits/stdc++.h"
using namespace std;

int dp[1001][1001];

int solve(int n, int a[], int sum)
{
    if (n == -1)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }

    if (sum < 0)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }

    if (dp[n][sum] != -1)
        return dp[n][sum];

    return dp[n][sum] = solve(n - 1, a, sum - a[n]) || solve(n - 1, a, sum);
}

int equalPartition(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    if (sum & 1) // if sum is odd then no solution
        return 0;

    sum = sum / 2;

    dp[n][sum];
    memset(dp, -1, sizeof(dp));

    return solve(n - 1, a, sum);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (equalPartition(a, n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}