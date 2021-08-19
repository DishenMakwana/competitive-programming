#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void tower_of_hanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
        return;

    tower_of_hanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    tower_of_hanoi(n - 1, helper, dest, src);
}

int32_t main()
{
    boost;
    tower_of_hanoi(3, 'A', 'C', 'B');
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}