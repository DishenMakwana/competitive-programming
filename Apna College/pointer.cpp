#include "bits/stdc++.h"
using namespace std;

void increment(int *n)
{
    *n = *n + 1;
}

int32_t main()
{
    int a = 100;
    int *aptr;
    aptr = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << aptr << endl;
    cout << *aptr << endl;

    aptr++;
    cout << aptr << endl;

    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl;
    }

    int b = 20;
    int *p;
    p = &b;
    cout << *p << endl;

    int **q = &p;
    cout << *q << endl;  // pointer location
    cout << **q << endl; // value

    int c = 2;
    // int *cptr = &c;
    increment(&c);
    cout << c << endl;
    return 0;
}