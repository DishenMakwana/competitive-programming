#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);

    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // s.erase(2);
    // cout << endl
    //      << s.size() << endl;

    // multiset<int> s;
    // s.insert(1);
    // s.insert(3);
    // s.insert(3);
    // s.insert(3);
    // s.insert(5);
    // s.erase(3);         // delete all instances of multiple occurances of an element
    // s.erase(s.find(3)); // delete only one occurrence of an element

    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }

    unordered_set<int> s;

    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    // s.erase(3);
    s.erase(s.find(3));

    for (auto i : s)
    {
        cout << i << " ";
    }
    return 0;
}