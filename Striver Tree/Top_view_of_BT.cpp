#include "bits/stdc++.h"
using namespace std;

// Definition for a binary tree node.

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<int> topView(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;

        map<int, int> m;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            auto it = q.front();
            q.pop();

            TreeNode *node = it.first;
            int line = it.second;

            if (m.find(line) == m.end())
            {
                m[line] = node->val;
            }

            if (node->left)
            {
                q.push({node->left, line - 1});
            }
            if (node->right)
            {
                q.push({node->right, line + 1});
            }
        }

        for (auto x : m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};