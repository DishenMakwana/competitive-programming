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
    init_code();

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto sum = [](int x, int y)
    { return x + y; };
    cout << sum(2, 3) << endl;

    cout << all_of(a.begin(), a.end(), [](int x)
                   { return x > 0; })
         << endl;

    cout << any_of(a.begin(), a.end(), [](int x)
                   { return x > 0; })
         << endl;

    cout << none_of(a.begin(), a.end(), [](int x)
                    { return x > 0; })
         << endl;
    return 0;
}