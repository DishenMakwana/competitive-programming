#include "bits/stdc++.h"
using namespace std;

//  Definition for a binary tree node.
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
    void allTraversals(TreeNode *root)
    {
        stack<pair<TreeNode *, int>> st;
        st.push({root, 1});
        vector<int> pre, in, post;

        if (root == NULL)
        {
            return;
        }

        while (!st.empty())
        {
            auto it = st.top();
            st.pop();

            // preorder
            if (it.second == 1)
            {
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);

                if (it.first->left != NULL)
                {
                    st.push({it.first->left, 1});
                }
            }
            // inorder
            else if (it.second == 2)
            {
                in.push_back(it.first->val);
                it.second++;
                st.push(it);

                if (it.first->right != NULL)
                {
                    st.push({it.first->right, 1});
                }
            }
            // postorder
            else
            {
                post.push_back(it.first->val);
            }
        }

        cout << "preorder:  ";
        for (auto i : pre)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "inorder:   ";
        for (auto i : in)
        {
            cout << i << " ";
        }
        cout << endl;

        cout << "postorder: ";
        for (auto i : post)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int32_t main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    Solution obj;
    obj.allTraversals(root);

    return 0;
}