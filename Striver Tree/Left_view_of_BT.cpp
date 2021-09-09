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
    void recursion(TreeNode *root, int level, vector<int> &ans)
    {
        if (root == NULL)
            return;
        if (ans.size() == level)
        {
            ans.push_back(root->val);
        }

        recursion(root->left, level + 1, ans);
        recursion(root->right, level + 1, ans);
    }

    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        recursion(root, 0, ans);
        return ans;
    }
};

int32_t main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution s;
    vector<int> ans = s.rightSideView(root);

    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}