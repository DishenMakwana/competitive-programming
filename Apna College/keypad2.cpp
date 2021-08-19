// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    //Function to find list of all words possible by pressing given numbers.

    vector<string> vs = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void permulate(vector<string> &ans, string &s, int arr[], int n, int idx = 0)
    {
        if (idx == n)
        {
            ans.push_back(s);
            return;
        }
        for (int j = 0; j < (vs[arr[idx]]).length(); j++)
        {
            s += vs[arr[idx]][j];
            permulate(ans, s, arr, n, idx + 1);

            s.pop_back();
        }
    }

    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        string s = "";
        vector<string> ans;
        permulate(ans, s, a, N, 0);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    int T;

    cin >> T; //testcases

    while (T--)
    { //while testcases exist
        int N;

        cin >> N; //input size of array

        int a[N]; //declare the array

        for (int i = 0; i < N; i++)
        {
            cin >> a[i]; //input the elements of array that are keys to be pressed
        }

        Solution obj;

        vector<string> res = obj.possibleWords(a, N);
        for (string i : res)
            cout << i << " ";
        cout << endl;
    }

    return 0;
} // } Driver Code Ends