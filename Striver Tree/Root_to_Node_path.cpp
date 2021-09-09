#include "bits/stdc++.h"
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool getPath(TreeNode *root, int x, vector<int> &ans)
{
    if (!root)
        return false;

    ans.push_back(root->val);

    if (root->val == x)
        return true;

    if (getPath(root->left, x, ans) || getPath(root->right, x, ans))
        return true;

    ans.pop_back();
    return false;
}

vector<int> solve(TreeNode *root, int x)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    getPath(root, x, ans);
    return ans;
}