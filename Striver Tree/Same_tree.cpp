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
    bool isIdentical(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == NULL && root2 == NULL)
        {
            return true;
        }
        else if (root1 == NULL || root2 == NULL)
        {
            return false;
        }
        else
        {
            bool c1 = root1->val == root2->val;
            bool c2 = isIdentical(root1->left, root2->left);
            bool c3 = isIdentical(root1->right, root2->right);

            if (c1 && c2 && c3)
            {
                return true;
            }
            return false;
        }
    }

    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        return isIdentical(p, q);
    }
};

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (!p)
            return !q;
        if (!q)
            return !p;

        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};