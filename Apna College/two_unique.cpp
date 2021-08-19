#include "bits/stdc++.h"
using namespace std;
#define boost                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int setBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int a[], int n)
{
    int xor_sum = 0;
    for (int i = 0; i < n; i++)
    {
        xor_sum = xor_sum ^ a[i];
    }

    int temp_xor = xor_sum; // all xor_sum
    int set_bit = 0, pos = 0;

    while (set_bit != 1)
    {
        set_bit = xor_sum & 1;
        pos++;
        xor_sum = xor_sum >> 1;
    }

    int new_xor = 0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(a[i], pos - 1)) //find 1 at given position and xor it
        {
            new_xor = new_xor ^ a[i];
        }
    }

    cout << new_xor << endl;
    cout << (temp_xor ^ new_xor) << endl;
}

int32_t main()
{
    boost;
    int a[8] = {1, 2, 3, 1, 2, 3, 5, 4};
    unique(a, 8);
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}