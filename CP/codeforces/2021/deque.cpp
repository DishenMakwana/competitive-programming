#include <bits/stdc++.h>
using namespace std;
#define ll long long

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void fun(int arr[], int n, int k)
{
    int mx;
    deque<int> dq;
    for (int i = 0; i < k; ++i)
    {
        dq.push_back(arr[i]);
    }

    mx = *max_element(dq.begin(), dq.end());
    cout << mx << " ";

    for (int i = k; i < n; ++i)
    {
        dq.push_back(arr[i]);
        if (dq[0] == mx)
        {
            dq.pop_front();
            mx = *max_element(dq.begin(), dq.end());
            cout << mx << " ";
        }
        else
        {
            dq.pop_front();
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
            cout << mx << " ";
        }
    }
    cout << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int i;
        int arr[n];

        for (i = 0; i < n; i++)
            cin >> arr[i];

        fun(arr, n, k);
    }
    return 0;
}