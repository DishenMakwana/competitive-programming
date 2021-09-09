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
    bool isSymmetric(TreeNode *root)
    {
        return root == NULL || isSym(root->left, root->right);
    }

    bool isSym(TreeNode *r1, TreeNode *r2)
    {
        if (!r1)
            return !r2;
        if (!r2)
            return !r1;

        return (r1->val == r2->val) && isSym(r1->left, r2->right) && isSym(r1->right, r2->left);
    }
};