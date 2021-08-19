#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int a = 10;
    int *p = new int();
    *p = 20;
    delete (p); //dangling pointer

    p = new int[4];
    delete[] p;
    p = NULL;

    return 0;
}