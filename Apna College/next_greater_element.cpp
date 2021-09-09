#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> s;
    vector<long long> res(n);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() and s.top() <= arr[i])
            s.pop();

        if (s.empty())
            res[i] = -1;
        else
            res[i] = s.top();

        s.push(arr[i]);
    }
    return res;
}

int32_t main()
{
    boost;
    // vector<long long> a = {4, 5, 2, 25, 7, 8};
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> ans = nextLargerElement(a, a.size());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << ans[i] << endl;
    }
    return 0;
}

// #2
// Language: cpp

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void init_code()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// vector<int> nextGreater(vector<int> &v)
// {
//     vector<int> nge(v.size());
//     stack<int> st;

//     for (int i = 0; i < v.size(); ++i)
//     {
//         while (!st.empty() && v[st.top()] < v[i])
//         {
//             nge[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }

//     while (!st.empty())
//     {
//         nge[st.top()] = -1;
//         st.pop();
//     }

//     return nge;
// }

// int32_t main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     init_code();

//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> v[i];
//     }

//     vector<int> ans = nextGreater(v);

//     for (int i = 0; i < n; ++i)
//     {
//         cout << v[i] << " " << (ans[i] == -1 ? -1 : v[ans[i]]) << endl;
//     }

//     return 0;
// }