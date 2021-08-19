#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int i = 0, j = 0;
l1:
    while (i < 2)
    {
        i++;
        while (j < 3)
        {
            cout << "loop" << endl;
            goto l1;
        }
    }
}