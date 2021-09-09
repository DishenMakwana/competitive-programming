#include "bits/stdc++.h"
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == NULL || root->val == q->val || root->val == p->val)
        {
            return root;
        }

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        if (left && right)
        {
            return root;
        }
        else if (left == NULL)
        {
            return right;
        }
        else
        {
            return left;
        }
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
    root->left->right->right = new TreeNode(7);
    root->right->left = new TreeNode(8);
    root->right->right = new TreeNode(9);

    Solution s;
    TreeNode *ans = s.lowestCommonAncestor(root, root->left->right->right, root->left->left);

    cout << ans->val << endl;

    return 0;
}