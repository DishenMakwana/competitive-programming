#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (auto &x : v)
    {
        cin >> x;
    }

    deque<int> dq;
    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && v[dq.back()] < v[i])
        {
            dq.pop_back();
        }
        dq.push_back(i); // index
    }

    ans.push_back(v[dq.front()]); // insert value at index

    for (int i = k; i < n; i++)
    {
        if (dq.front() == i - k) // remove element which are not in current window
        {
            dq.pop_front();
        }

        while (!dq.empty() && v[dq.back()] < v[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);              // index
        ans.push_back(v[dq.front()]); // insert value at index
    }

    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}

// int32_t main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);

//     for (auto &x : v)
//     {
//         cin >> x;
//     }

//     multiset<int, greater<int>> s;
//     vector<int> ans;

//     for (int i = 0; i < k; i++)
//     {
//         s.insert(v[i]);
//     }
//     ans.push_back(*s.begin());
//     for (int i = k; i < n; i++)
//     {
//         s.erase(s.lower_bound(v[i - x]));
//         s.insert(v[i]);
//         ans.push_back(*s.begin());
//     }

//     for (auto a : ans)
//     {
//         cout << a << " ";
//     }
//     cout << endl;
//     return 0;
// }