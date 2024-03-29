#include "bits/stdc++.h"
using namespace std;

void nextPermutation(vector<int> &v)
{
    int n = v.size(), k, l;
    for (k = n - 2; k >= 0; k--)
    {
        if (v[k] < v[k + 1])
        {
            break;
        }
    }

    if (k < 0)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        for (l = n - 1; l > k; l--)
        {
            if (v[l] > v[k])
            {
                break;
            }
        }
        swap(v[k], v[l]);
        reverse(v.begin() + k + 1, v.end());
    }

    for (auto &x : v)
    {
        cout << x << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    nextPermutation(a);
    return 0;
}