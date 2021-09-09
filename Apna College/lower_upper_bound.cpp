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

    vector<int> v(n);
    set<int> st;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        st.insert(v[i]);
        m[v[i]]++;
    }

    sort(v.begin(), v.end());

    auto it = lower_bound(v.begin(), v.end(), 5); // log(N)
    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    it = upper_bound(v.begin(), v.end(), 5); // log(N)
    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    // set
    auto it2 = st.lower_bound(5); // log(N)
    if (it2 == st.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << *it2 << endl;
    }

    // map
    auto it3 = m.lower_bound(5); // log(N)
    if (it3 == m.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << (*it3).first << " " << (*it3).second << endl;
    }

    return 0;
}