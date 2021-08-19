#include "bits/stdc++.h"
using namespace std;

int main()
{
    int pocket_money = 3000;
    for (int i = 1; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (pocket_money == 0)
        {
            break;
        }
        cout << "Go out today : " << i << endl;
        pocket_money -= 300;
    }
    return 0;
}