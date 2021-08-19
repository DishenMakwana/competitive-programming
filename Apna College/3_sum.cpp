#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, target;
    cin >> n >> target;
    vector<int> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    bool found = false;

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        int lo = i + 1, hi = n - 1;
        while (lo < hi)
        {
            int curr = a[i] + a[lo] + a[hi];
            if (curr == target)
            {
                found = true;
                cout << a[i] << " " << a[lo] << " " << a[hi] << endl;
                break;
            }
            if (curr < target)
            {
                lo++;
            }
            else
            {
                hi--;
            }
        }
    }

    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}