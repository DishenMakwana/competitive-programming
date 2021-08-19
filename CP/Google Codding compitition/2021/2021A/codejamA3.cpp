#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int i, int j)
{
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;

    vector<vector<int>> ans;
    for (int t = 1; t <= test; t++)
    {
        int n, c;
        cin >> n >> c;

        int maxpossible = 0, minpossible = 0;
        minpossible = n - 1;
        maxpossible = (((n * (n + 1)) / 2) - 1);

        if (c < minpossible || c > maxpossible)
        {
            ans.push_back({-1});
            continue;
        }

        vector<int> result(n, 0);
        for (int i = 0; i < n; i++)
            result[i] = i + 1;

        bool right = true;
        int i = 0, j = n - 1;
        int cost = n - 1;

        while (cost < c)
        {
            if (c - cost < j - i)
            {
                j = c - cost + i;
                reverse(result, i, j);
                cost += j - i;
            }
            else
            {
                reverse(result, i, j);
                cost += j - i;
                if (right)
                    j--;
                else
                    i++;
                right = !right;
            }
        }
        ans.push_back(result);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Case #" << i + 1 << ": ";
        if (ans[i][0] == -1)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            for (int ele : ans[i])
                cout << ele << " ";
            cout << endl;
        }
    }
    return 0;
}