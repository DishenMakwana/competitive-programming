#include <bits/stdc++.h>
using namespace std;
#define ll long long

double eps = 1e-6; // value upto 5 decimal places

double search(double x)
{
    double l = 1, h = x, mid;

    while (h - l > eps)
    {
        mid = (l + h) / 2.0;

        if (mid * mid < x)
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

    double n;
    cin >> n;

    cout << search(n) << endl;

    return 0;
}