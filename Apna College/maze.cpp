#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }

    if (i >= n || j >= n)
    {
        return 0;
    }

    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int32_t main()
{
    boost;
    cout << countPathMaze(3, 0, 0) << endl;
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}