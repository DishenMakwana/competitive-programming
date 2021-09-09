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
    bool isSumProperty(TreeNode *root)
    {
        int left_sum = 0, right_sum = 0;

        if (root == NULL || (root->left == NULL && root->right == NULL))
        {
            return 1;
        }
        else
        {
            if (root->left)
            {
                left_sum = root->left->val;
            }
            if (root->right)
            {
                right_sum = root->right->val;
            }

            if (root->val == left_sum + right_sum && isSumProperty(root->left) && isSumProperty(root->right))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
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
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(8);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(5);
    // root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(2);

    inorder(root);
    cout << endl;

    Solution s;
    if (s.isSumProperty(root))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
