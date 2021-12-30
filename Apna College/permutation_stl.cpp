#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> a = {1, 3, 2};
    next_permutation(a.begin(), a.end());
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    prev_permutation(a.begin(), a.end());
    for (auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}