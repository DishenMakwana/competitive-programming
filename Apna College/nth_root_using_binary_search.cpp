#include <bits/stdc++.h>
using namespace std;
#define ll long long

double eps = 1e-6; // value upto 5 decimal places

double multiply(double mid, int n)
{
    double ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= mid;
    }
    return ans;
}

double search(double x, int n)
{
    double l = 1, h = x, mid;

    while (h - l > eps)
    {
        mid = (l + h) / 2.0;

        if (multiply(mid, n) < x)
        {
            l = mid;
        }
        else
        {
            h = mid;
        }
    }

    return l;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    double x;
    int n;
    cin >> x >> n;

    cout << search(x, n) << endl;

    return 0;
}