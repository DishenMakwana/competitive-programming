#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> m;
    for (auto &c : s)
    {
        m[c]++;
    }

    for (auto &c : s)
    {
        if (m[c] == 1)
        {
            cout << c << endl;
            break;
        }
    }
    return 0;
}