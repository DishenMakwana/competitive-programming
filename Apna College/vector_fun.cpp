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

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // init_code();

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int it = *min_element(a.begin(), a.end()); // O(N)
    cout << it << endl;

    int it2 = *max_element(a.begin(), a.end()); // O(N)
    cout << it2 << endl;

    int sum = accumulate(a.begin(), a.end(), 0); // O(N)
    cout << sum << endl;

    int cnt = count(a.begin(), a.end(), 6); // O(N)
    cout << cnt << endl;

    auto it1 = find(a.begin(), a.end(), 10); // O(N)
    if (it1 != a.end())
        cout << *it1 << endl;
    else
        cout << "Not Found" << endl;

    reverse(a.begin(), a.end()); // O(N)
    for (auto &x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}