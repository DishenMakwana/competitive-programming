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
    void reorder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }

        int child = 0;
        if (root->left)
        {
            child += root->left->val;
        }
        if (root->right)
        {
            child += root->right->val;
        }

        if (child >= root->val)
        {
            root->val = child;
        }
        else
        {
            if (root->left)
            {
                root->left->val = root->val;
            }
            else if (root->right)
            {
                root->right->val = root->val;
            }
        }

        reorder(root->left);
        reorder(root->right);

        int total = 0;
        if (root->left)
        {
            total += root->left->val;
        }
        if (root->right)
        {
            total += root->right->val;
        }

        if (root->left || root->right)
        {
            root->val = total;
        }
    }

    void changeTree(TreeNode *root)
    {
        reorder(root);
    }
};

void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int32_t main()
{
    TreeNode *root = new TreeNode(50);
    root->left = new TreeNode(7);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(30);

    inorder(root);
    cout << endl;

    Solution s;
    s.changeTree(root);

    inorder(root);

    return 0;
}
