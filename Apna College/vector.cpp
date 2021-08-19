#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (auto x : v)
    {
        cout << x << " ";
    }

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    // v.pop_back();

    vector<int> v2(3, 0);
    for (auto x : v2)
    {
        cout << x << " ";
    }

    swap(v, v2); // swap all array

    sort(v2.begin(), v2.end(), greater<int>());

    for (auto x : v2)
    {
        cout << x << " ";
    }

    pair<int, char> p;
    p.first = 3;
    p.second = 'f';

    return 0;
}