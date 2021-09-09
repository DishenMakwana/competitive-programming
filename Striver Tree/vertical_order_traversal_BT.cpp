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
    void getVerticalOrder(TreeNode *root, int hdis, map<int, vector<int>> &m)
    {
        if (root == NULL)
            return;

        m[hdis].push_back(root->val);

        getVerticalOrder(root->left, hdis - 1, m);
        getVerticalOrder(root->right, hdis + 1, m);
    }

    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, map<int, multiset<int>>> m;
        queue<pair<TreeNode *, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while (!q.empty())
        {
            auto p = q.front();
            q.pop();

            TreeNode *node = p.first;
            int x = p.second.first, y = p.second.second;
            m[x][y].insert(node->val);

            if (node->left)
            {
                q.push({node->left, {x - 1, y + 1}});
            }
            if (node->right)
            {
                q.push({node->right, {x + 1, y + 1}});
            }
        }

        vector<vector<int>> ans;
        for (auto x : m)
        {
            vector<int> cols;
            for (auto y : x.second)
            {
                cols.insert(cols.end(), y.second.begin(), y.second.end());
            }
            ans.push_back(cols);
        }
        return ans;
    }
};